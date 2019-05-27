/*
** EPITECH PROJECT, 2019
** animation_helpers.c
** File description:
** MUL_MyEngine_2018
*/

#include "engine/components/animation.h"
#include "engine/components/eclock.h"

void animation_display(animation_t *animation, global_t *global)
{
    if (!animation || !global)
        return;
    dyn_sprite_display(animation->dspt, global);
}

void animation_update(animation_t *animation, eclock_t *elapse)
{
    if (!animation || !elapse)
        return;
    animation->secs -= elapse->secs;
}