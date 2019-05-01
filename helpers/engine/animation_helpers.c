/*
** EPITECH PROJECT, 2019
** animation_helpers.c
** File description:
** MUL_MyEngine_2018
*/

#include "engine/components/animation.h"
#include "engine/components/rclock.h"

void animation_display(animation_t *animation, global_t *global)
{
    if (animation) {
        sprite_display(animation->dspt->spt, global);
    }
}

void animation_update(animation_t *animation, rclock_t *elapse)
{
    if (animation) {
        animation->secs -= elapse->secs;
    }
}