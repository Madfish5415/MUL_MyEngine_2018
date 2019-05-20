/*
** EPITECH PROJECT, 2018
** button.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/button.h"
#include "engine/components/dyn_sprite.h"
#include "engine/components/text.h"
#include "engine/utils.h"

button_t *button_create(const char *path, sfIntRect size,
        const char *value, const char *font)
{
    button_t *button = malloc(sizeof(button_t));
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, size.width, size.height};
    sfFloatRect global;

    if (!button)
        return (NULL);
    button->dspt = dyn_sprite_create(path, size);
    button->txt = (button->dspt) ? text_create(value,
            (unsigned int) (button->dspt->rect.height * 0.5), font) : NULL;
    if (!button->dspt || !button->dspt->spt || !button->txt)
        return (NULL);
    button->pos = pos;
    button->state = BTN_STATE_NORMAL;
    button->act = NULL;
    rect.width = button->dspt->spt->rect.width;
    dyn_sprite_set_rect(button->dspt, rect);
    global = sfSprite_getGlobalBounds(button->dspt->spt->obj);
    text_set_pos(button->txt, pos_of_f(global, POS_CENTER, POS_CENTER));
    return (button);
}

void button_set_pos(button_t *button, sfVector2f pos)
{
    sfFloatRect global;

    if (!button)
        return;
    button->pos = pos;
    sprite_set_pos(button->dspt->spt, button->pos);
    global = sfSprite_getGlobalBounds(button->dspt->spt->obj);
    text_set_pos(button->txt, pos_of_f(global, POS_CENTER, POS_CENTER));
}

void button_set_state(button_t *button, int state)
{
    sfIntRect rect = {0, 0, 0, 0};

    if (!button)
        return;
    if (state != button->state) {
        rect.top = button->dspt->rect.height * (state - 1);
        rect.width = button->dspt->spt->rect.width;
        rect.height = button->dspt->rect.height;
        dyn_sprite_set_rect(button->dspt, rect);
        button->state = state;
    }
}

void button_delete(button_t *button)
{
    if (!button)
        return;
    dyn_sprite_delete(button->dspt);
    text_delete(button->txt);
    free(button);
}