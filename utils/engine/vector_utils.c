/*
** EPITECH PROJECT, 2018
** vector_utils.c
** File description:
** No description
*/

#include <SFML/System/Vector2.h>
#include <math.h>
#include "engine/utils/vector.h"

double vect_angle(sfVector2f point1, sfVector2f point2)
{
    double angle = 0;
    double dx = point2.x - point1.x;
    double dy = point2.y - point1.y;

    if (dx || dy)
        angle = (dx) ? atan((dy / dx)) : (M_PI / 2);
    return (angle);
}

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

sfVector2f vect_velocity(sfVector2f point1, sfVector2f point2, double speed)
{
    sfVector2f velocity = {0, 0};
    double angle = vect_angle(point1, point2);
    double dx = point2.x - point1.x;
    double dy = point2.y - point1.y;
    int factor = 100000;

    if (!dx && !dy)
        return (velocity);
    angle *= (angle > 0) ? 1 : -1;
    velocity.x = speed * cos(angle);
    velocity.x *= (dx >= 0) ? 1 : -1;
    velocity.x = roundf(velocity.x * factor) / factor;
    velocity.y = speed * sin(angle);
    velocity.y *= (dy >= 0) ? 1 : -1;
    velocity.y = roundf(velocity.y * factor) / factor;
    return (velocity);
}