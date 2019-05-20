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
    if (!global || !global->win)
        return;
    sfRenderWindow_close(global->win);
}