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
#include "engine/utils/rectangle.h"

global_t *global_create(sfRenderWindow *win, sfEvent evt)
{
    global_t *global = malloc(sizeof(global_t));
    sfVector2u size;

    if (!global || !win)
        return (NULL);
    size = sfRenderWindow_getSize(win);
    global->win = win;
    global->rect = rect_f(0, 0, size.x, size.y);
    global->evt = evt;
    global->data = NULL;
    global->opts = NULL;
    global->vals = NULL;
    return (global);
}

void global_delete(global_t *global)
{
    if (!global)
        return;
    sfRenderWindow_destroy(global->win);
    value_list_delete(global->opts);
    value_list_delete(global->vals);
    free(global);
}