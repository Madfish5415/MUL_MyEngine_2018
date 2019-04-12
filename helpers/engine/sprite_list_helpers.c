/*
** EPITECH PROJECT, 2018
** sprite_list_helpers.c
** File description:
** No description
*/

#include "engine/components/sprite.h"
#include "engine/components/sprite_list.h"

void sprite_list_display(sprite_list_t *sprite_list, global_t *global, int id)
{
    sprite_list_t *loop = sprite_list;

    if (sprite_list) {
        do {
            if ((loop->id == id) || (id == 0))
                sprite_display(loop->spt, global);
            loop = loop->next;
        } while (loop != sprite_list);
    }
}