/*
** EPITECH PROJECT, 2019
** trigger.h
** File description:
** MUL_MyEngine_2018
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_WARP_H
#define MUL_MYENGINE_2018_COMPONENTS_WARP_H

/**
* @file
*/

#include <SFML/Graphics/Rect.h>
#include "dyn_sprite.h"
#include "global.h"
#include "scene.h"

/**
* @brief Trigger component
*/
typedef struct trigger_s {
    dyn_sprite_t *dspt;
    sfIntRect zone;
    void (*act)(scene_t *scene, global_t *global);
} trigger_t;

/**
* @brief Create a trigger
*
* @param path
* @param rect
* @param zone
* @return
*/
trigger_t *trigger_create(const char *path, sfIntRect rect, sfIntRect zone);

/**
* @brief Delete a trigger
*
* @param trigger
*/
void trigger_delete(trigger_t *trigger);

/**
* @brief Display a trigger
*
* @param trigger
* @param global
*/
void trigger_display(trigger_t *trigger, global_t *global);

/**
* @brief Check if a rectangle is on a trigger
*
* @param trigger
* @param rect
* @return
*/
int trigger_on_it(trigger_t *trigger, sfFloatRect rect);

#endif // MUL_MYENGINE_2018_COMPONENTS_WARP_H
