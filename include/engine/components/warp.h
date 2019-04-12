/*
** EPITECH PROJECT, 2019
** warp.h
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
 * @brief Warp component
 */
typedef struct warp_s {
    dyn_sprite_t *dspt;
    sfIntRect zone;
    void (*act)(scene_t *scene, global_t *global);
} warp_t;

/**
 * @brief Create a warp
 *
 * @param path
 * @param rect
 * @param zone
 * @return
 */
warp_t *warp_create(const char *path, sfIntRect rect, sfIntRect zone);

/**
 * @brief Delete a warp
 *
 * @param warp
 */
void warp_delete(warp_t *warp);

/**
 * @brief Display a warp
 *
 * @param warp
 * @param global
 */
void warp_display(warp_t *warp, global_t *global);

/**
 * @brief Check if a rectangle is on a warp
 *
 * @param warp
 * @param rect
 * @return
 */
int warp_on_it(warp_t *warp, sfFloatRect rect);

#endif // MUL_MYENGINE_2018_COMPONENTS_WARP_H
