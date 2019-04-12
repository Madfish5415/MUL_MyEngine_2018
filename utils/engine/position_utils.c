/*
** EPITECH PROJECT, 2019
** position_utils.c
** File description:
** MUL_MyEngine_2018
*/

#include <SFML/Graphics/Rect.h>
#include <SFML/System/Vector2.h>
#include "engine/utils/position.h"

sfVector2f pos_of_i(sfIntRect rect, int horizontal, int vectical)
{
    sfVector2f vect = {0, 0};

    vect.x = rect.left;
    vect.y = rect.top;
    if (horizontal == POS_CENTER)
        vect.x += (float) rect.width / 2;
    if (horizontal == POS_RIGHT)
        vect.x += rect.width;
    if (vectical == POS_CENTER)
        vect.y += (float) rect.height / 2;
    if (vectical == POS_BOTTOM)
        vect.y += rect.height;
    return (vect);
}

sfVector2f pos_of_f(sfFloatRect rect, int horizontal, int vectical)
{
    sfVector2f vect = {0, 0};

    vect.x = rect.left;
    vect.y = rect.top;
    if (horizontal == POS_CENTER)
        vect.x += rect.width / 2;
    if (horizontal == POS_RIGHT)
        vect.x += rect.width;
    if (vectical == POS_CENTER)
        vect.y += rect.height / 2;
    if (vectical == POS_BOTTOM)
        vect.y += rect.height;
    return (vect);
}

sfVector2f pos_to_i(sfIntRect rect, sfFloatRect reference,
        int horizontal, int vectical)
{
    sfVector2f vect = {0, 0};

    vect.x = reference.left;
    vect.y = reference.top;
    if (horizontal == POS_CENTER)
        vect.x += (reference.width - rect.width) / 2;
    if (horizontal == POS_RIGHT)
        vect.x += (reference.width - rect.width);
    if (vectical == POS_CENTER)
        vect.y += (reference.height - rect.height) / 2;
    if (vectical == POS_BOTTOM)
        vect.y += (reference.height - rect.height);
    return (vect);
}

sfVector2f pos_to_f(sfFloatRect rect, sfFloatRect reference,
        int horizontal, int vectical)
{
    sfVector2f vect = {0, 0};

    vect.x = reference.left;
    vect.y = reference.top;
    if (horizontal == POS_CENTER)
        vect.x += (reference.width - rect.width) / 2;
    if (horizontal == POS_RIGHT)
        vect.x += (reference.width - rect.width);
    if (vectical == POS_CENTER)
        vect.y += (reference.height - rect.height) / 2;
    if (vectical == POS_BOTTOM)
        vect.y += (reference.height - rect.height);
    return (vect);
}