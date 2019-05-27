/*
** EPITECH PROJECT, 2018
** dyn_sprite_helpers.c
** File description:
** No description
*/

#include <math.h>
#include "engine/components/dyn_sprite.h"
#include "engine/utils/vector.h"

static int dyn_sprite_at_step(dyn_sprite_t *dyn_sprite, int id)
{
    int at_step = 0;

    if (!dyn_sprite)
        return (at_step);
    if (dyn_sprite->vect.x >= 0)
        at_step = (dyn_sprite->spt->pos.x >= dyn_sprite->road[id].x) ? 1 : 0;
    else
        at_step = (dyn_sprite->spt->pos.x <= dyn_sprite->road[id].x) ? 1 : 0;
    if (dyn_sprite->vect.y >= 0)
        at_step &= (dyn_sprite->spt->pos.y >= dyn_sprite->road[id].y) ? 1 : 0;
    else
        at_step &= (dyn_sprite->spt->pos.y <= dyn_sprite->road[id].y) ? 1 : 0;
    return (at_step);
}

void dyn_sprite_animate(dyn_sprite_t *dyn_sprite)
{
    if (!dyn_sprite)
        return;
    dyn_sprite->rect.left += dyn_sprite->rect.width;
    if (dyn_sprite->rect.left >= dyn_sprite->spt->rect.width) {
        dyn_sprite->rect.left = dyn_sprite->spt->rect.left;
        dyn_sprite->rect.top += dyn_sprite->rect.height;
        if (dyn_sprite->rect.top >= dyn_sprite->spt->rect.height)
            dyn_sprite->rect.top = dyn_sprite->spt->rect.top;
    }
    sfSprite_setTextureRect(dyn_sprite->spt->obj, dyn_sprite->rect);
}

void dyn_sprite_calculate(dyn_sprite_t *dyn_sprite, int step, int next)
{
    double agl = 0;
    sfVector2f vect = {0, 0};

    if (!dyn_sprite)
        return;
    if (((next - step) > 0) && (next < dyn_sprite->steps)) {
        agl = vect_angle(dyn_sprite->road[step], dyn_sprite->road[next]);
        vect = vect_velocity(dyn_sprite->road[step], dyn_sprite->road[next],
                dyn_sprite->spd);
    }
    dyn_sprite->agl = agl;
    dyn_sprite->vect = vect;
}

void dyn_sprite_display(dyn_sprite_t *dyn_sprite, global_t *global)
{
    if (!dyn_sprite)
        return;
    sprite_display(dyn_sprite->spt, global);
}

void dyn_sprite_move(dyn_sprite_t *dyn_sprite, sfBool reset)
{
    if (!dyn_sprite || !dyn_sprite->road)
        return;
    if (dyn_sprite->step < dyn_sprite->steps - 1) {
        dyn_sprite->spt->pos.x += dyn_sprite->vect.x;
        dyn_sprite->spt->pos.y += dyn_sprite->vect.y;
        if (dyn_sprite_at_step(dyn_sprite, dyn_sprite->step + 1)) {
            dyn_sprite->step += 1;
            sprite_set_pos(dyn_sprite->spt,
                    dyn_sprite->road[dyn_sprite->step]);
            dyn_sprite_calculate(dyn_sprite,
                    dyn_sprite->step, dyn_sprite->step + 1);
        }
        sprite_set_pos(dyn_sprite->spt, dyn_sprite->spt->pos);
    } else if (reset) {
        dyn_sprite->step = 0;
        dyn_sprite_calculate(dyn_sprite, 0, 1);
        sprite_set_pos(dyn_sprite->spt, dyn_sprite->road[0]);
    } else
        dyn_sprite_calculate(dyn_sprite, 0, 0);
}