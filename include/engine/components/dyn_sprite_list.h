/*
** EPITECH PROJECT, 2018
** dyn_sprite_list.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_DYN_SPRITE_LIST_H
#define MUL_MYENGINE_2018_COMPONENTS_DYN_SPRITE_LIST_H

/**
 * @file
 */

#include "dyn_sprite.h"
#include "global.h"

/**
 * @brief Dynamic sprite list component
 */
typedef struct dyn_sprite_list_s {
    dyn_sprite_t *dspt;
    int id;
    struct dyn_sprite_list_s *prev;
    struct dyn_sprite_list_s *next;
} dyn_sprite_list_t;

/**
 * @brief Add a dynamic sprite to a dynamic sprite list
 *
 * @param dyn_sprite_list
 * @param dyn_sprite
 * @param id
 */
void dyn_sprite_list_add(dyn_sprite_list_t **dyn_sprite_list,
        dyn_sprite_t *dyn_sprite, int id);

/**
 * @brief Get a dynamic sprite from a dynamic sprite list
 *
 * @param dyn_sprite_list
 * @param id
 * @return
 */
dyn_sprite_t *dyn_sprite_list_get(dyn_sprite_list_t *dyn_sprite_list, int id);

/**
 * @brief Remove a dynaic sprite from a dynamic sprite list
 *
 * @param dyn_sprite_list
 * @param id
 */
void dyn_sprite_list_remove(dyn_sprite_list_t **dyn_sprite_list, int id);

/**
 * @brief Remove and return the current dynamic sprite list item from a dynamic
 * sprite list
 *
 * @param dyn_sprite_list
 * @return
 */
dyn_sprite_list_t *dyn_sprite_list_pop(dyn_sprite_list_t **dyn_sprite_list);

/**
 * @brief Delete a dynamic sprite list
 *
 * @param dyn_sprite_list
 */
void dyn_sprite_list_delete(dyn_sprite_list_t *dyn_sprite_list);

/**
 * @brief Animate the dynamic sprites related to the specific id in a dynamic
 * sprite list
 *
 * @param dyn_sprite_list
 * @param id
 */
void dyn_sprite_list_animate(dyn_sprite_list_t *dyn_sprite_list, int id);

/**
 * @brief Display the dynamic sprites related to the specific id in a dynamic
 * sprite list
 *
 * @param dyn_sprite_list
 * @param global
 * @param id
 */
void dyn_sprite_list_display(dyn_sprite_list_t *dyn_sprite_list,
        global_t *global, int id);

/**
 * @brief Move the dynamic sprites related to the specific id in a dynamic
 * sprite list
 *
 * @param dyn_sprite_list
 * @param reset
 * @param id
 */
void dyn_sprite_list_move(dyn_sprite_list_t *dyn_sprite_list,
        sfBool reset, int id);

#endif // MUL_MYENGINE_2018_COMPONENTS_DYN_SPRITE_LIST_H
