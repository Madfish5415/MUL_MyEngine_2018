/*
** EPITECH PROJECT, 2019
** trigger_helpers.c
** File description:
** MUL_MyEngine_2018
*/

#include <SFML/Graphics.h>
#include "engine/components/trigger.h"

void trigger_display(trigger_t *trigger, global_t *global)
{
    if (trigger) {
        sprite_display(trigger->dspt->spt, global);
    }
}

int trigger_on_it(trigger_t *trigger, sfFloatRect rect)
{
    sfFloatRect rect_w = sfSprite_getGlobalBounds(trigger->dspt->spt->obj);
    sfFloatRect rect_i;

    if (sfFloatRect_intersects(&rect_w, &rect, &rect_i))
        return (1);
    return (0);
}