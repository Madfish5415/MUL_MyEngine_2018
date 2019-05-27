/*
** EPITECH PROJECT, 2019
** trigger_helpers.c
** File description:
** MUL_MyEngine_2018
*/

#include "engine/components/trigger.h"

void trigger_animate(trigger_t *trigger)
{
    if (!trigger)
        return;
    dyn_sprite_animate(trigger->dspt);
}

void trigger_display(trigger_t *trigger, global_t *global)
{
    if (!trigger || !global)
        return;
    dyn_sprite_display(trigger->dspt, global);
}