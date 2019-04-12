/*
** EPITECH PROJECT, 2019
** warp.c
** File description:
** MUL_MyEngine_2018
*/

#include <SFML/Graphics/Rect.h>
#include <stdlib.h>
#include "engine/components/dyn_sprite.h"
#include "engine/components/warp.h"

warp_t *warp_create(const char *path, sfIntRect rect, sfIntRect zone)
{
    warp_t *warp = malloc(sizeof(warp_t));

    if (warp) {
        warp->dspt = dyn_sprite_create(path, rect);
        warp->zone = zone;
        warp->act = NULL;
    }
    return (warp);
}

void warp_delete(warp_t *warp)
{
    if (warp) {
        dyn_sprite_delete(warp->dspt);
        free(warp);
    }
}