/*
** EPITECH PROJECT, 2018
** dyn_sprite_helpers.c
** File description:
** No description
*/

#include <math.h>
#include "engine/components/dyn_sprite.h"

void dyn_sprite_animate(dyn_sprite_t *dyn_sprite)
{
    if (dyn_sprite) {
        dyn_sprite->rect.left += dyn_sprite->rect.width;
        if (dyn_sprite->rect.left >= dyn_sprite->spt->rect.width) {
            dyn_sprite->rect.left = dyn_sprite->spt->rect.left;
            dyn_sprite->rect.top += dyn_sprite->rect.height;
            if (dyn_sprite->rect.top >= dyn_sprite->spt->rect.height)
                dyn_sprite->rect.top = dyn_sprite->spt->rect.top;
        }
        sfSprite_setTextureRect(dyn_sprite->spt->obj, dyn_sprite->rect);
    }
}

int dyn_sprite_at_step(dyn_sprite_t *dyn_sprite, int id)
{
    int at_step = 0;

    if (dyn_sprite) {
        if (dyn_sprite->vect.x >= 0)
            at_step = dyn_sprite->spt->pos.x >= dyn_sprite->road[id].x;
        else
            at_step = dyn_sprite->spt->pos.x <= dyn_sprite->road[id].x;
        if (dyn_sprite->vect.y >= 0)
            at_step &= dyn_sprite->spt->pos.y >= dyn_sprite->road[id].y;
        else
            at_step &= dyn_sprite->spt->pos.y <= dyn_sprite->road[id].y;
    }
    return (at_step);
}

void dyn_sprite_calculate(dyn_sprite_t *dyn_sprite, int step, int next)
{
    double agl = 0;
    double delta_x = 0;
    double delta_y = 0;
    sfVector2f vect = {0, 0};

    if (dyn_sprite) {
        if ((next - step) > 0) {
            delta_x = dyn_sprite->road[next].x - dyn_sprite->road[step].x;
            delta_y = dyn_sprite->road[next].y - dyn_sprite->road[step].y;
            agl = (delta_x) ? atan((delta_y / delta_x)) : (M_PI / 2);
            agl *= (agl >= 0) ? 1 : -1;
            vect.x = dyn_sprite->spd * (float) cos(agl);
            vect.x *= (delta_x >= 0) ? 1 : -1;
            vect.y = dyn_sprite->spd * (float) sin(agl);
            vect.y *= (delta_y >= 0) ? 1 : -1;
        }
        dyn_sprite->agl = agl;
        dyn_sprite->vect = vect;
    }
}

void dyn_sprite_move(dyn_sprite_t *dyn_sprite, sfBool reset)
{
    if (dyn_sprite && dyn_sprite->road) {
        if ((dyn_sprite->step + 1) != dyn_sprite->steps) {
            dyn_sprite->spt->pos.x += dyn_sprite->vect.x;
            dyn_sprite->spt->pos.y += dyn_sprite->vect.y;
            if (dyn_sprite_at_step(dyn_sprite, dyn_sprite->step + 1)) {
                dyn_sprite->step += 1;
                dyn_sprite->spt->pos = dyn_sprite->road[dyn_sprite->step];
                dyn_sprite_calculate(dyn_sprite,
                        dyn_sprite->step, dyn_sprite->step + 1);
            }
        } else if (reset) {
            dyn_sprite->step = 0;
            dyn_sprite->spt->pos = dyn_sprite->road[0];
            dyn_sprite_calculate(dyn_sprite, 0, 1);
        }
        sprite_set_pos(dyn_sprite->spt, dyn_sprite->spt->pos);
    }
}