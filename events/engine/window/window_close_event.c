/*
** EPITECH PROJECT, 2018
** window_close_event..c
** File description:
** No description
*/

#include <SFML/Graphics.h>
#include <engine/components.h>
#include "engine/events.h"

void window_close(global_t *global)
{
    sfRenderWindow_close(global->win);
}