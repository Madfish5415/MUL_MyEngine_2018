/*
** EPITECH PROJECT, 2018
** rclock.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_RCLOCK_H
#define MUL_MYENGINE_2018_COMPONENTS_RCLOCK_H

/**
 * @file
 */

#include <SFML/Config.h>
#include <SFML/System/Types.h>

/**
 * @brief RClock structure
 */
typedef struct rclock_s {
    sfClock *clk;
    float secs;
    sfBool rst;
} rclock_t;

/**
 * @brief Create a rclock
 *
 * @return
 */
rclock_t *rclock_create();

/**
 * @brief Check if a rclock has exceeded the specified time
 *
 * @param rclock
 * @param seconds
 * @return
 */
int rclock_time(rclock_t *rclock, float seconds);

/**
 * @brief Restart a rclock
 *
 * @param rclock
 */
void rclock_restart(rclock_t *rclock);

/**
 * @brief Update a rclock
 *
 * @param rclock
 */
void rclock_update(rclock_t *rclock);

/**
 * @brief Delete a rclock
 *
 * @param rclock
 */
void rclock_delete(rclock_t *rclock);

#endif // MUL_MYENGINE_2018_COMPONENTS_RCLOCK_H
