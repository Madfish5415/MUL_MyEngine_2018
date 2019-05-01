/*
** EPITECH PROJECT, 2018
** sprite_list.c
** File description:
** No description
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "engine/components/sprite.h"
#include "engine/components/sprite_list.h"

void sprite_list_add(sprite_list_t **sprite_list, sprite_t *sprite, int id)
{
    sprite_list_t *item = malloc(sizeof(sprite_list_t));
    sprite_list_t *first = NULL;
    sprite_list_t *last = NULL;

    item->spt = sprite;
    item->id = id;
    if (*sprite_list) {
        first = *sprite_list;
        last = first->prev;
        item->prev = last;
        item->next = first;
        first->prev = item;
        last->next = item;
    } else {
        item->prev = item;
        item->next = item;
        *sprite_list = item;
    }
}

sprite_t *sprite_list_get(sprite_list_t *sprite_list, int id)
{
    sprite_list_t *loop = sprite_list;

    if (sprite_list) {
        do {
            if (loop->id == id)
                return (loop->spt);
            loop = loop->next;
        } while (loop != sprite_list);
    }
    return (NULL);
}

void sprite_list_remove(sprite_list_t **sprite_list, int id)
{
    sprite_list_t *loop = *sprite_list;
    sprite_list_t *item = NULL;

    if (*sprite_list) {
        do {
            if (loop->id == id) {
                item = sprite_list_pop(&loop);
                sprite_delete(item->spt);
                free(item);
                *sprite_list = (loop) ? loop : NULL;
                break;
            }
            loop = loop->next;
        } while (loop != *sprite_list);
    }
}

sprite_list_t *sprite_list_pop(sprite_list_t **sprite_list)
{
    sprite_list_t *item = *sprite_list;
    sprite_list_t *prev = NULL;
    sprite_list_t *next = NULL;

    if (*sprite_list) {
        if (item != item->next) {
            prev = item->prev;
            next = item->next;
            prev->next = next;
            next->prev = prev;
            *sprite_list = next;
        } else
            *sprite_list = NULL;
        item->prev = NULL;
        item->next = NULL;
    }
    return (item);
}

void sprite_list_delete(sprite_list_t *sprite_list)
{
    sprite_list_t *item = NULL;

    if (sprite_list) {
        do {
            item = sprite_list_pop(&sprite_list);
            sprite_delete(item->spt);
            free(item);
        } while (sprite_list != NULL);
    }
}