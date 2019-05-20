/*
** EPITECH PROJECT, 2019
** trigger_helpers.c
** File description:
** MUL_MyEngine_2018
*/

#include "engine/components/trigger.h"

void trigger_display(trigger_t *trigger, global_t *global)
{
    if (!trigger)
        return;
    sprite_display(trigger->dspt->spt, global);
}