/*
** EPITECH PROJECT, 2018
** global.c
** File description:
** No description
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "engine/components/global.h"
#include "engine/components/scene.h"
#include "engine/components/value_list.h"

global_t *global_create(sfRenderWindow *win, sfEvent evt)
{
    global_t *global = malloc(sizeof(global_t));
    sfVector2u size = sfRenderWindow_getSize(win);
    sfFloatRect rect = {0, 0, size.x, size.y};

    if (global) {
        global->win = win;
        global->rect = rect;
        global->evt = evt;
        global->data = NULL;
        global->opts = NULL;
        global->prms = NULL;
    }
    return (global);
}

void global_delete(global_t *global)
{
    if (global) {
        sfRenderWindow_destroy(global->win);
        value_list_delete(global->opts);
        value_list_delete(global->prms);
        free(global);
    }
}