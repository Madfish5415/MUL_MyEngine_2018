/*
** EPITECH PROJECT, 2018
** button_list.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_BUTTON_LIST_H
#define MUL_MYENGINE_2018_COMPONENTS_BUTTON_LIST_H

/**
* @file
*/

#include "button.h"
#include "global.h"

/**
* @brief Button list component
*/
typedef struct button_list_s {
    button_t *btn;
    int id;
    struct button_list_s *prev;
    struct button_list_s *next;
} button_list_t;

/**
* @brief Add a button to a button list
*
* @param button_list
* @param button
* @param id
*/
void button_list_add(button_list_t **button_list, button_t *button, int id);

/**
* @brief Remove a button from a button list
*
* @param button_list
* @param id
*/
void button_list_remove(button_list_t **button_list, int id);

/**
* @brief Remove and return the current button list item from a button list
*
* @param button_list
* @return
*/
button_list_t *button_list_pop(button_list_t **button_list);

/**
* @brief Delete a button list
*
* @param button_list
*/
void button_list_delete(button_list_t *button_list);

/**
* @brief Animate the buttons related to the specified id in a button list
*
* @param button_list
* @param id
*/
void button_list_animate(button_list_t *button_list, int id);

/**
* @brief Display the buttons related to the specified id in a button list
*
* @param button_list
* @param global
* @param id
*/
void button_list_display(button_list_t *button_list, global_t *global, int id);

/**
* @brief Get a button from a button list
*
* @param button_list
* @param id
* @return
*/
button_t *button_list_get(button_list_t *button_list, int id);

#endif // MUL_MYENGINE_2018_COMPONENTS_BUTTON_LIST_H
