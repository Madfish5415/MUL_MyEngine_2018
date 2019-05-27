/*
** EPITECH PROJECT, 2018
** value_list.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_OPTION_LIST_H
#define MUL_MYENGINE_2018_COMPONENTS_OPTION_LIST_H

/**
* @file
*/

#include "value.h"

/**
* @brief Value list component
*/
typedef struct value_list_s {
    value_t *val;
    int id;
    struct value_list_s *prev;
    struct value_list_s *next;
} value_list_t;

/**
* @brief Add a value to a value list
*
* @param value_list
* @param value
* @param id
*/
void value_list_add(value_list_t **value_list, value_t *value, int id);

/**
* @brief Remove a value from a value list
*
* @param value_list
* @param id
*/
void value_list_remove(value_list_t **value_list, int id);

/**
* @brief Remove and return the current value list item from a value list
*
* @param value_list
* @return
*/
value_list_t *value_list_pop(value_list_t **value_list);

/**
* @brief Delete a value list
*
* @param value_list
*/
void value_list_delete(value_list_t *value_list);

/**
* @brief Get a value from a value list
*
* @param value_list
* @param id
* @return
*/
value_t *value_list_get(value_list_t *value_list, int id);

#endif // MUL_MYENGINE_2018_COMPONENTS_OPTION_LIST_H
