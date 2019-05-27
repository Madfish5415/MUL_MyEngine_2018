/*
** EPITECH PROJECT, 2018
** dyn_sprite_list.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/dyn_sprite.h"
#include "engine/components/dyn_sprite_list.h"

static dyn_sprite_list_t *dyn_sprite_list_item(dyn_sprite_t *dyn_sprite,
        int id)
{
    dyn_sprite_list_t *item = malloc(sizeof(dyn_sprite_list_t));

    if (!item)
        return (NULL);
    item->dspt = dyn_sprite;
    item->id = id;
    return (item);
}

void dyn_sprite_list_add(dyn_sprite_list_t **dyn_sprite_list,
        dyn_sprite_t *dyn_sprite, int id)
{
    dyn_sprite_list_t *item = dyn_sprite_list_item(dyn_sprite, id);

    if (!item)
        return;
    if (*dyn_sprite_list) {
        item->prev = (*dyn_sprite_list)->prev;
        item->next = *dyn_sprite_list;
        item->prev->next = item;
        item->next->prev = item;
    } else {
        item->prev = item;
        item->next = item;
        *dyn_sprite_list = item;
    }
}

dyn_sprite_list_t *dyn_sprite_list_pop(dyn_sprite_list_t **dyn_sprite_list)
{
    dyn_sprite_list_t *item = *dyn_sprite_list;

    if (!*(dyn_sprite_list))
        return (NULL);
    if (*dyn_sprite_list != (*dyn_sprite_list)->next) {
        item->prev->next = item->next;
        item->next->prev = item->prev;
        *dyn_sprite_list = item->next;
    } else
        *dyn_sprite_list = NULL;
    return (item);
}

void dyn_sprite_list_remove(dyn_sprite_list_t **dyn_sprite_list, int id)
{
    dyn_sprite_list_t *loop = *dyn_sprite_list;
    dyn_sprite_list_t *item = NULL;

    if (!(*dyn_sprite_list))
        return;
    do {
        if (loop->id == id) {
            item = dyn_sprite_list_pop(&loop);
            dyn_sprite_delete(item->dspt);
            free(item);
            *dyn_sprite_list = (loop) ? loop : NULL;
            break;
        }
        loop = loop->next;
    } while (loop != *dyn_sprite_list);
}

void dyn_sprite_list_delete(dyn_sprite_list_t *dyn_sprite_list)
{
    dyn_sprite_list_t *item = NULL;

    if (!dyn_sprite_list)
        return;
    do {
        item = dyn_sprite_list_pop(&dyn_sprite_list);
        dyn_sprite_delete(item->dspt);
        free(item);
    } while (dyn_sprite_list != NULL);
}