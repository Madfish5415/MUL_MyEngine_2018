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
#include "eclock.h"

/**
* @brief Animation component
*/
typedef struct animation_s {
    dyn_sprite_t *dspt;
    float secs;
} animation_t;

/**
* @brief Create an animation
*
* @param dspt
* @param secs
* @return
*/
animation_t *animation_create(dyn_sprite_t *dspt, float secs);

/**
* @brief Delete an animation
*
* @param animation
*/
void animation_delete(animation_t *animation);

/**
* @brief Display an animation
*
* @param animation
* @param global
*/
void animation_display(animation_t *animation, global_t *global);

/**
* @brief Update an animation
*
* @param animation
* @param elapse
*/
void animation_update(animation_t *animation, eclock_t *elapse);

#endif // MUL_MYENGINE_2018_COMPONENTS_ANIMATION_H
