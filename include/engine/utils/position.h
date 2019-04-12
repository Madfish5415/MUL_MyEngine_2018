/*
** EPITECH PROJECT, 2018
** position.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_UTILS_POSITION_H
#define MUL_MYENGINE_2018_UTILS_POSITION_H

/**
 * @file
 */

/**
 * @brief List positions
 */
enum POSITIONS {
    POS_LEFT = 1,
    POS_TOP,
    POS_CENTER,
    POS_RIGHT,
    POS_BOTTOM
};

/**
 * @brief Return the calculated position of a rectangle (integer)
 *
 * @param rect
 * @param horizontal
 * @param vectical
 * @return
 */
sfVector2f pos_of_i(sfIntRect rect, int horizontal, int vectical);

/**
 * @brief Return the calculated position of a rectangle (float)
 *
 * @param rect
 * @param horizontal
 * @param vectical
 * @return
 */
sfVector2f pos_of_f(sfFloatRect rect, int horizontal, int vectical);

/**
 * @brief Return the calculated position of a rectangle (integer) relative to
 * a reference
 *
 * @param rect
 * @param reference
 * @param horizontal
 * @param vectical
 * @return
 */
sfVector2f pos_to_i(sfIntRect rect, sfFloatRect reference,
        int horizontal, int vectical);

/**
 * @brief Return the calculated position of a rectangle (float) relative to
 * a reference
 *
 * @param rect
 * @param reference
 * @param horizontal
 * @param vectical
 * @return
 */
sfVector2f pos_to_f(sfFloatRect rect, sfFloatRect reference,
        int horizontal, int vectical);

#endif // MUL_MYENGINE_2018_UTILS_POSITION_H
