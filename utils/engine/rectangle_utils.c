/*
** EPITECH PROJECT, 2018
** rectangle_utils.c
** File description:
** No description
*/

#include <SFML/Graphics/Rect.h>
#include <SFML/System/Vector2.h>
#include "engine/utils/rectangle.h"

sfIntRect rect_i(int left, int top, int width, int height)
{
    sfIntRect rect = {left, top, width, height};

    return (rect);
}

sfFloatRect rect_f(float left, float top, float width, float height)
{
    sfFloatRect rect = {left, top, width, height};

    return (rect);
}