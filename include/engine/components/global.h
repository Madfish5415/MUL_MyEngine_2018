/*
** EPITECH PROJECT, 2018
** global.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_GLOBAL_H
#define MUL_MYENGINE_2018_COMPONENTS_GLOBAL_H

/**
* @file
*/

#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/Types.h>
#include <SFML/Window/Event.h>
#include "value_list.h"

/**
* @brief Global component
*/
typedef struct global_s {
    sfRenderWindow *win;
    sfFloatRect rect;
    sfEvent evt;
    void *data;
    value_list_t *opts;
    value_list_t *prms;
} global_t;

/**
* @brief Create the global
*
* @param win
* @param evt
* @return
*/
global_t *global_create(sfRenderWindow *win, sfEvent evt);

/**
* @brief Delete the global
*
* @param global
*/
void global_delete(global_t *global);

#endif // MUL_MYENGINE_2018_COMPONENTS_GLOBAL_H
