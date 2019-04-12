/*
** EPITECH PROJECT, 2018
** rclock_list.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_RCLOCK_LIST_H
#define MUL_MYENGINE_2018_COMPONENTS_RCLOCK_LIST_H

/**
 * @file
 */

#include "rclock.h"

/**
 * @brief RClock list component
 */
typedef struct rclock_list_s {
    rclock_t *rclk;
    int id;
    struct rclock_list_s *prev;
    struct rclock_list_s *next;
} rclock_list_t;

/**
 * @brief Create a rclock list
 *
 * @param nbr
 * @return
 */
rclock_list_t *rclock_list_create(int nbr);

/**
 * @brief Add a rclock to a rclock list
 *
 * @param rclock_list
 * @param rclock
 * @param id
 */
void rclock_list_add(rclock_list_t **rclock_list, rclock_t *rclock, int id);

/**
 * @brief Remove and return the current rclock list item from a rclock list
 *
 * @param rclock_list
 * @return
 */
rclock_list_t *rclock_list_pop(rclock_list_t **rclock_list);

/**
 * @brief Delete a rclock list
 *
 * @param rclock_list
 */
void rclock_list_delete(rclock_list_t *rclock_list);

/**
 * @brief Check if the rclock related to the specified id has exceeded the
 * specified time
 *
 * @param rclock_list
 * @param seconds
 * @param id
 * @return
 */
int rclock_list_time(rclock_list_t *rclock_list, float seconds, int id);

/**
 * @brief Restart the rclock related to the specified id
 *
 * @param rclock_list
 * @param id
 * @return
 */
void rclock_list_restart(rclock_list_t *rclock_list, int id);

/**
 * @brief Update the rclock related to the specified id
 *
 * @param rclock_list
 * @param id
 */
void rclock_list_update(rclock_list_t *rclock_list, int id);

#endif // MUL_MYENGINE_2018_COMPONENTS_RCLOCK_LIST_H
