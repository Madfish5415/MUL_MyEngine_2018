/*
** EPITECH PROJECT, 2019
** trigger_list.h
** File description:
** MUL_MyEngine_2018
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_WARP_LIST_H
#define MUL_MYENGINE_2018_COMPONENTS_WARP_LIST_H

/**
* @file
*/

#include "global.h"
#include "trigger.h"

/**
* @brief Warp list component
*/
typedef struct trigger_list_s {
    trigger_t *trigger;
    int id;
    struct trigger_list_s *prev;
    struct trigger_list_s *next;
} trigger_list_t;

/**
* @brief Add a trigger to a trigger list
*
* @param trigger_list
* @param trigger
* @param id
*/
void trigger_list_add(trigger_list_t **trigger_list, trigger_t *trigger,
        int id);

/**
* @brief Get a trigger from a trigger list
*
* @param trigger_list
* @param id
* @return
*/
trigger_t *trigger_list_get(trigger_list_t *trigger_list, int id);

/**
* @brief Remove a trigger from a trigger list
*
* @param trigger_list
* @param id
*/
void trigger_list_remove(trigger_list_t **trigger_list, int id);

/**
* @brief Remove and return the current trigger list item from a trigger list
*
* @param trigger_list
* @return
*/
trigger_list_t *trigger_list_pop(trigger_list_t **trigger_list);

/**
* @brief Delete a trigger list
*
* @param trigger_list
*/
void trigger_list_delete(trigger_list_t *trigger_list);

/**
* @brief Animate the triggers related to the specified id
*
* @param trigger_list
* @param id
*/
void trigger_list_animate(trigger_list_t *trigger_list, int id);

/**
* @brief Display the triggers related to the specified id
*
* @param trigger_list
* @param global
* @param id
*/
void trigger_list_display(trigger_list_t *trigger_list, global_t *global,
        int id);

/**
* @brief Check if a rectangle is on the triggers related to the specified id
*
* @param trigger_list
* @param rect
* @param id
* @return
*/
int trigger_list_on_it(trigger_list_t *trigger_list, sfFloatRect rect, int id);

#endif // MUL_MYENGINE_2018_COMPONENTS_WARP_LIST_H
