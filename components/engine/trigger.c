/*
** EPITECH PROJECT, 2019
** trigger.c
** File description:
** MUL_MyEngine_2018
*/

#include <SFML/Graphics/Rect.h>
#include <stdlib.h>
#include "engine/components/dyn_sprite.h"
#include "engine/components/trigger.h"

trigger_t *trigger_create(const char *path, sfIntRect rect, sfFloatRect zone)
{
    trigger_t *trigger = malloc(sizeof(trigger_t));

    if (!trigger)
        return (NULL);
    trigger->dspt = dyn_sprite_create(path, rect);
    trigger->zone = zone;
    trigger->act = NULL;
    return (trigger);
}

void trigger_delete(trigger_t *trigger)
{
    if (!trigger)
        return;
    dyn_sprite_delete(trigger->dspt);
    free(trigger);
}