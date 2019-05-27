/*
** EPITECH PROJECT, 2018
** eclock_list.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_RCLOCK_LIST_H
#define MUL_MYENGINE_2018_COMPONENTS_RCLOCK_LIST_H

/**
* @file
*/

#include "eclock.h"

/**
* @brief EClock list component
*/
typedef struct eclock_list_s {
    eclock_t *eclk;
    int id;
    struct eclock_list_s *prev;
    struct eclock_list_s *next;
} eclock_list_t;

/**
* @brief Create a eclock list
*
* @param nbr
* @return
*/
eclock_list_t *eclock_list_create(int nbr);

/**
* @brief Add a eclock to a eclock list
*
* @param eclock_list
* @param eclock
* @param id
*/
void eclock_list_add(eclock_list_t **eclock_list, eclock_t *eclock, int id);

/**
* @brief Remove and return the current eclock list item from a eclock list
*
* @param eclock_list
* @return
*/
eclock_list_t *eclock_list_pop(eclock_list_t **eclock_list);

/**
* @brief Delete a eclock list
*
* @param eclock_list
*/
void eclock_list_delete(eclock_list_t *eclock_list);

/**
* @brief Get a eclock from a eclock list
*
* @param eclock_list
* @param id
* @return
*/
eclock_t *eclock_list_get(eclock_list_t *eclock_list, int id);

/**
* @brief Check if the eclock related to the specified id has exceeded the
* specified time
*
* @param eclock_list
* @param seconds
* @param id
* @return
*/
int eclock_list_time(eclock_list_t *eclock_list, float seconds, int id);

/**
* @brief Restart the eclock related to the specified id
*
* @param eclock_list
* @param id
* @return
*/
void eclock_list_restart(eclock_list_t *eclock_list, int id);

/**
* @brief Update the eclock related to the specified id
*
* @param eclock_list
* @param id
*/
void eclock_list_update(eclock_list_t *eclock_list, int id);

#endif // MUL_MYENGINE_2018_COMPONENTS_RCLOCK_LIST_H
