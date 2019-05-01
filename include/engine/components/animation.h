/*
** EPITECH PROJECT, 2019
** animation.h
** File description:
** MUL_MyEngine_2018
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_ANIMATION_H
#define MUL_MYENGINE_2018_COMPONENTS_ANIMATION_H

/**
* @file
*/

#include "dyn_sprite.h"
#include "rclock.h"

/**
* @brief Animation component
*/
typedef struct animation_s {
    dyn_sprite_t *dspt;
    float secs;
} animation_t;

animation_t *animation_create(dyn_sprite_t *dspt, float secs);

void animation_delete(animation_t *animation);

void animation_display(animation_t *animation, global_t *global);

void animation_update(animation_t *animation, rclock_t *elapse);

#endif // MUL_MYENGINE_2018_COMPONENTS_ANIMATION_H
