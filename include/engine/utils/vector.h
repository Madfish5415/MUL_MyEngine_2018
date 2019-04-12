/*
** EPITECH PROJECT, 2018
** vector.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_UTILS_VECTOR_H
#define MUL_MYENGINE_2018_UTILS_VECTOR_H

/**
 * @file
 */

#include <SFML/System/Vector2.h>

// Vector utils
/**
 * @brief Return a vector (integer)
 *
 * @param x
 * @param y
 * @return
 */
sfVector2i vect_i(int x, int y);

/**
 * @brief Return a vector (float)
 *
 * @param x
 * @param y
 * @return
 */
sfVector2f vect_f(float x, float y);

#endif // MUL_MYENGINE_2018_UTILS_VECTOR_H
