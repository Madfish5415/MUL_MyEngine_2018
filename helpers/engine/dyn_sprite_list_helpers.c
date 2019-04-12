/*
** EPITECH PROJECT, 2018
** dyn_sprite_list_helpers.c
** File description:
** No description
*/

#include <engine/components.h>
#include "engine/components/dyn_sprite.h"
#include "engine/components/dyn_sprite_list.h"

void dyn_sprite_list_animate(dyn_sprite_list_t *dyn_sprite_list, int id)
{
    dyn_sprite_list_t *loop = dyn_sprite_list;

    if (dyn_sprite_list) {
        do {
            if ((loop->id == id) || (id == 0))
                dyn_sprite_animate(loop->dspt);
            loop = loop->next;
        } while (loop != dyn_sprite_list);
    }
}

void dyn_sprite_list_display(dyn_sprite_list_t *dyn_sprite_list,
        global_t *global, int id)
{
    dyn_sprite_list_t *loop = dyn_sprite_list;

    if (dyn_sprite_list) {
        do {
            if ((loop->id == id) || (id == 0))
                sprite_display(loop->dspt->spt, global);
            loop = loop->next;
        } while (loop != dyn_sprite_list);
    }
}

void dyn_sprite_list_move(dyn_sprite_list_t *dyn_sprite_list,
        sfBool reset, int id)
{
    dyn_sprite_list_t *loop = dyn_sprite_list;

    if (dyn_sprite_list) {
        do {
            if ((loop->id == id) || (id == 0))
                dyn_sprite_move(loop->dspt, reset);
            loop = loop->next;
        } while (loop != dyn_sprite_list);
    }
}