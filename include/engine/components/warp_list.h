/*
** EPITECH PROJECT, 2019
** warp_list.h
** File description:
** MUL_MyEngine_2018
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_WARP_LIST_H
#define MUL_MYENGINE_2018_COMPONENTS_WARP_LIST_H

/**
 * @file
 */

#include "global.h"
#include "warp.h"

/**
 * @brief Warp list component
 */
typedef struct warp_list_s {
    warp_t *warp;
    int id;
    struct warp_list_s *prev;
    struct warp_list_s *next;
} warp_list_t;

/**
 * @brief Add a warp to a warp list
 *
 * @param warp_list
 * @param warp
 * @param id
 */
void warp_list_add(warp_list_t **warp_list, warp_t *warp, int id);

/**
 * @brief Get a warp from a warp list
 *
 * @param warp_list
 * @param id
 * @return
 */
warp_t *warp_list_get(warp_list_t *warp_list, int id);

/**
 * @brief Remove a warp from a warp list
 *
 * @param warp_list
 * @param id
 */
void warp_list_remove(warp_list_t **warp_list, int id);

/**
 * @brief Remove and return the current warp list item from a warp list
 *
 * @param warp_list
 * @return
 */
warp_list_t *warp_list_pop(warp_list_t **warp_list);

/**
 * @brief Delete a warp list
 *
 * @param warp_list
 */
void warp_list_delete(warp_list_t *warp_list);

/**
 * @brief Animate the warps related to the specified id
 *
 * @param warp_list
 * @param id
 */
void warp_list_animate(warp_list_t *warp_list, int id);

/**
 * @brief Display the warps related to the specified id
 *
 * @param warp_list
 * @param global
 * @param id
 */
void warp_list_display(warp_list_t *warp_list, global_t *global, int id);

/**
 * @brief Check if a rectangle is on the warps related to the specified id
 *
 * @param warp_list
 * @param rect
 * @param id
 * @return
 */
int warp_list_on_it(warp_list_t *warp_list, sfFloatRect rect, int id);

#endif // MUL_MYENGINE_2018_COMPONENTS_WARP_LIST_H
