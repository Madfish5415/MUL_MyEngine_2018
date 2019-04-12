/*
** EPITECH PROJECT, 2018
** vector_utils.c
** File description:
** No description
*/

#include <SFML/System/Vector2.h>
#include "engine/utils/vector.h"

sfVector2i vect_i(int x, int y)
{
    sfVector2i vect = {x, y};

    return (vect);
}

sfVector2f vect_f(float x, float y)
{
    sfVector2f vect = {x, y};

    return (vect);
}