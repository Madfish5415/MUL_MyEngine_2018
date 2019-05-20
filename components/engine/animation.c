/*
** EPITECH PROJECT, 2019
** animation.c
** File description:
** MUL_MyEngine_2018
*/

#include <stdlib.h>
#include "engine/components/animation.h"
#include "engine/components/dyn_sprite.h"
#include "engine/utils/object_check.h"

animation_t *animation_create(dyn_sprite_t *dspt, float secs)
{
    animation_t *animation = malloc(sizeof(animation_t));

    if (!animation)
        return (NULL);
    animation->dspt = dspt;
    animation->secs = secs;
    return (animation);
}

void animation_delete(animation_t *animation)
{
    if (!animation)
        return;
    dyn_sprite_delete(animation->dspt);
    free(animation);
}