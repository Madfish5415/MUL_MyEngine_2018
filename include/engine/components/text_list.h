/*
** EPITECH PROJECT, 2018
** text_list.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_TEXT_LIST_H
#define MUL_MYENGINE_2018_COMPONENTS_TEXT_LIST_H

/**
 * @file
 */

#include "global.h"
#include "text.h"

/**
 * @brief Text list component
 */
typedef struct text_list_s {
    text_t *text;
    int id;
    struct text_list_s *prev;
    struct text_list_s *next;
} text_list_t;

/**
 * @brief Add a text to a text list
 *
 * @param text_list
 * @param text
 * @param id
 */
void text_list_add(text_list_t **text_list, text_t *text, int id);

/**
 * @brief Get a text from a text list
 *
 * @param text_list
 * @param id
 * @return
 */
text_t *text_list_get(text_list_t *text_list, int id);

/**
 * @brief Remove a text from a text list
 *
 * @param text_list
 * @param id
 */
void text_list_remove(text_list_t **text_list, int id);

/**
 * @brief Remove and return the current text list item from a text list
 *
 * @param text_list
 * @return
 */
text_list_t *text_list_pop(text_list_t **text_list);

/**
 * @brief Delete a text list
 *
 * @param text_list
 */
void text_list_delete(text_list_t *text_list);

/**
 * @brief Display the texts related to the specified id
 *
 * @param text_list
 * @param global
 * @param id
 */
void text_list_display(text_list_t *text_list, global_t *global, int id);

#endif // MUL_MYENGINE_2018_COMPONENTS_TEXT_LIST_H
