/*
** EPITECH PROJECT, 2018
** dyn_sprite_list.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/dyn_sprite.h"
#include "engine/components/dyn_sprite_list.h"

void dyn_sprite_list_add(dyn_sprite_list_t **dyn_sprite_list,
        dyn_sprite_t *dyn_sprite, int id)
{
    dyn_sprite_list_t *item = malloc(sizeof(dyn_sprite_list_t));
    dyn_sprite_list_t *first = NULL;
    dyn_sprite_list_t *last = NULL;

    item->dspt = dyn_sprite;
    item->id = id;
    if (*dyn_sprite_list) {
        first = *dyn_sprite_list;
        last = first->prev;
        item->prev = last;
        item->next = first;
        first->prev = item;
        last->next = item;
    } else {
        item->prev = item;
        item->next = item;
        *dyn_sprite_list = item;
    }
}

dyn_sprite_t *dyn_sprite_list_get(dyn_sprite_list_t *dyn_sprite_list, int id)
{
    dyn_sprite_list_t *loop = dyn_sprite_list;

    if (dyn_sprite_list) {
        do {
            if (loop->id == id)
                return (loop->dspt);
            loop = loop->next;
        } while (loop != dyn_sprite_list);
    }
    return (NULL);
}

void dyn_sprite_list_remove(dyn_sprite_list_t **dyn_sprite_list, int id)
{
    dyn_sprite_list_t *start = *dyn_sprite_list;
    dyn_sprite_list_t *loop = *dyn_sprite_list;
    dyn_sprite_list_t *item = NULL;

    if (*dyn_sprite_list) {
        do {
            if (loop->id == id) {
                item = dyn_sprite_list_pop(&loop);
                start = (start->id == id) ? loop : start;
                *dyn_sprite_list = start;
                dyn_sprite_delete(item->dspt);
                free(item);
                break;
            }
            loop = loop->next;
        } while (loop != *dyn_sprite_list);
    }
}

dyn_sprite_list_t *dyn_sprite_list_pop(dyn_sprite_list_t **dyn_sprite_list)
{
    dyn_sprite_list_t *item = *dyn_sprite_list;
    dyn_sprite_list_t *prev = NULL;
    dyn_sprite_list_t *next = NULL;

    if (*dyn_sprite_list) {
        if (item != item->next) {
            prev = item->prev;
            next = item->next;
            prev->next = next;
            next->prev = prev;
            *dyn_sprite_list = next;
        } else
            *dyn_sprite_list = NULL;
        item->prev = NULL;
        item->next = NULL;
    }
    return (item);
}

void dyn_sprite_list_delete(dyn_sprite_list_t *dyn_sprite_list)
{
    dyn_sprite_list_t *item = NULL;

    if (dyn_sprite_list) {
        do {
            item = dyn_sprite_list_pop(&dyn_sprite_list);
            dyn_sprite_delete(item->dspt);
            free(item);
        } while (dyn_sprite_list != NULL);
    }
}