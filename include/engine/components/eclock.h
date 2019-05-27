/*
** EPITECH PROJECT, 2018
** eclock.h
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
* @brief EClock structure
*/
typedef struct eclock_s {
    sfClock *clk;
    float secs;
    sfBool rst;
} eclock_t;

/**
* @brief Create a eclock
*
* @return
*/
eclock_t *eclock_create();

/**
* @brief Check if a eclock has exceeded the specified time
*
* @param eclock
* @param seconds
* @return
*/
int eclock_time(eclock_t *eclock, float seconds);

/**
* @brief Restart a eclock
*
* @param eclock
*/
void eclock_restart(eclock_t *eclock);

/**
* @brief Update a eclock
*
* @param eclock
*/
void eclock_update(eclock_t *eclock);

/**
* @brief Delete a eclock
*
* @param eclock
*/
void eclock_delete(eclock_t *eclock);

#endif // MUL_MYENGINE_2018_COMPONENTS_RCLOCK_H
