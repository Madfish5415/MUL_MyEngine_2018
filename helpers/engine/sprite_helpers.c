/*
** EPITECH PROJECT, 2018
** sprite_helpers.c
** File description:
** No description
*/

#include "engine/components/global.h"
#include "engine/components/sprite.h"
#include "engine/utils/window.h"

void sprite_display(sprite_t *sprite, global_t *global)
{
    if (!sprite || !sprite->obj || !global)
        return;
    if (window_is_visible(global, sprite))
        sfRenderWindow_drawSprite(global->win, sprite->obj, NULL);
}