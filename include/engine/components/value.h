/*
** EPITECH PROJECT, 2018
** value.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_OPTION_H
#define MUL_MYENGINE_2018_COMPONENTS_OPTION_H

/**
* @file
*/

#include <SFML/Config.h>

/**
* @brief Value component
*/
typedef struct value_s {
    int itg;
    float flt;
    sfBool bool;
    void *all;
} value_t;

/**
* @brief Create a value
*
* @param itg
* @param flt
* @param bool
* @param all
* @return
*/
value_t *value_create(int itg, float flt, sfBool bool, void *all);

/**
* @brief Delete a value
*
* @param value
*/
void value_delete(value_t *value);

#endif // MUL_MYENGINE_2018_COMPONENTS_OPTION_H
