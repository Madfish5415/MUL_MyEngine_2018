/*
** EPITECH PROJECT, 2019
** warp_list_helpers.c
** File description:
** MUL_MyEngine_2018
*/

#include "engine/components/warp.h"
#include "engine/components/warp_list.h"

void warp_list_animate(warp_list_t *warp_list, int id)
{
    warp_list_t *loop = warp_list;

    if (warp_list) {
        do {
            if ((loop->id == id) || (id == 0))
                dyn_sprite_animate(loop->warp->dspt);
            loop = loop->next;
        } while (loop != warp_list);
    }
}

void warp_list_display(warp_list_t *warp_list, global_t *global, int id)
{
    warp_list_t *loop = warp_list;

    if (warp_list) {
        do {
            if ((loop->id == id) || (id == 0))
                warp_display(loop->warp, global);
            loop = loop->next;
        } while (loop != warp_list);
    }
}

int warp_list_on_it(warp_list_t *warp_list, sfFloatRect rect, int id)
{
    warp_list_t *loop = warp_list;

    if (warp_list) {
        do {
            if (loop->id == id)
                return (warp_on_it(loop->warp, rect));
            loop = loop->next;
        } while (loop != warp_list);
    }
    return (0);
}