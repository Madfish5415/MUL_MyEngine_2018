/*
** EPITECH PROJECT, 2019
** warp_helpers.c
** File description:
** MUL_MyEngine_2018
*/

#include <SFML/Graphics.h>
#include "engine/components/warp.h"

void warp_display(warp_t *warp, global_t *global)
{
    if (warp) {
        sprite_display(warp->dspt->spt, global);
    }
}

int warp_on_it(warp_t *warp, sfFloatRect rect)
{
    sfFloatRect rect_w = sfSprite_getGlobalBounds(warp->dspt->spt->obj);
    sfFloatRect rect_i;

    if (sfFloatRect_intersects(&rect_w, &rect, &rect_i))
        return (1);
    return (0);
}