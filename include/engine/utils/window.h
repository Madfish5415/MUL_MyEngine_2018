/*
** EPITECH PROJECT, 2018
** window.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_UTILS_WINDOW_H
#define MUL_MYENGINE_2018_UTILS_WINDOW_H

/**
 * @file
 */

#include <SFML/Graphics/Types.h>
#include "engine/components/global.h"
#include "engine/components/sprite.h"

// Window utils
/**
 * @brief Get the mouse position
 *
 * @param global
 * @return
 */
sfVector2f window_get_mouse_pos(global_t *global);

/**
 * @brief Check if a sprite is visible in the window
 *
 * @param global
 * @param sprite
 * @return
 */
sfBool window_is_visible(global_t *global, sprite_t *sprite);

#endif // MUL_MYENGINE_2018_UTILS_WINDOW_H
