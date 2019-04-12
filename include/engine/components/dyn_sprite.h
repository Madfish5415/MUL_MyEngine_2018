/*
** EPITECH PROJECT, 2018
** dyn_sprite.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_DYN_SPRITE_H
#define MUL_MYENGINE_2018_COMPONENTS_DYN_SPRITE_H

/**
 * @file
 */

#include <SFML/Graphics.h>
#include "sprite.h"

/**
 * @brief Dynamic sprite component
 */
typedef struct dyn_sprite_s {
    sprite_t *spt;
    sfIntRect rect;
    sfVector2f *road;
    int step;
    int steps;
    float spd;
    double agl;
    sfVector2f vect;
} dyn_sprite_t;

/**
 * @brief Create a dynamic sprite
 *
 * @param path
 * @param rect
 * @return
 */
dyn_sprite_t *dyn_sprite_create(const char *path, sfIntRect rect);

/**
 * @brief Set the rectangle of a dynamic sprite
 *
 * @param dyn_sprite
 * @param rect
 */
void dyn_sprite_set_rect(dyn_sprite_t *dyn_sprite, sfIntRect rect);

/**
 * @brief Set the road of a dynamic sprite
 *
 * @param dyn_sprite
 * @param road
 * @param steps
 */
void dyn_sprite_set_road(dyn_sprite_t *dyn_sprite,
        sfVector2f *road, int steps);

/**
 * @brief Delete a dynamic sprite
 *
 * @param dyn_sprite
 */
void dyn_sprite_delete(dyn_sprite_t *dyn_sprite);

/**
 * @brief Animate a dynamic sprite
 *
 * @param dyn_sprite
 */
void dyn_sprite_animate(dyn_sprite_t *dyn_sprite);

/**
 * @brief Calculate the vector of a dynamic sprite between two steps
 *
 * @param dyn_sprite
 * @param step
 * @param next
 */
void dyn_sprite_calculate(dyn_sprite_t *dyn_sprite, int step, int next);

/**
 * @brief Move a dynamic sprite
 *
 * @param dyn_sprite
 * @param reset
 */
void dyn_sprite_move(dyn_sprite_t *dyn_sprite, sfBool reset);

#endif // MUL_MYENGINE_2018_COMPONENTS_DYN_SPRITE_H
