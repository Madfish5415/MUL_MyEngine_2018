/*
** EPITECH PROJECT, 2018
** text.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_TEXT_H
#define MUL_MYENGINE_2018_COMPONENTS_TEXT_H

/**
 * @file
 */

#include <SFML/Graphics.h>
#include "global.h"

/**
 * @brief Text component
 */
typedef struct text_s {
    sfText *obj;
    sfFont *font;
    sfFloatRect rect;
    sfVector2f pos;
} text_t;

/**
 * @brief Create a text
 *
 * @param value
 * @param size
 * @param font
 * @return
 */
text_t *text_create(const char *value, unsigned int size, const char *font);

/**
 * @brief Set the font of a text
 *
 * @param text
 * @param path
 */
void text_set_font(text_t *text, const char *path);

/**
 * @brief Set the value of a text
 *
 * @param text
 * @param value
 * @param size
 */
void text_set_value(text_t *text, const char *value, unsigned int size);

/**
 * @brief Set the position of a text
 *
 * @param text
 * @param pos
 */
void text_set_pos(text_t *text, sfVector2f pos);

/**
 * @brief Delete a text
 *
 * @param text
 */
void text_delete(text_t *text);

/**
 * @brief Display a text
 *
 * @param text
 * @param global
 */
void text_display(text_t *text, global_t *global);

#endif // MUL_MYENGINE_2018_COMPONENTS_TEXT_H
