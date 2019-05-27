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

static sprite_list_t *sprite_list_item(sprite_t *sprite, int id)
{
    sprite_list_t *item = malloc(sizeof(sprite_list_t));

    if (!item)
        return (NULL);
    item->spt = sprite;
    item->id = id;
    return (item);
}

void sprite_list_add(sprite_list_t **sprite_list, sprite_t *sprite, int id)
{
    sprite_list_t *item = sprite_list_item(sprite, id);

    if (!item)
        return;
    if (*sprite_list) {
        item->prev = (*sprite_list)->prev;
        item->next = *sprite_list;
        item->prev->next = item;
        item->next->prev = item;
    } else {
        item->prev = item;
        item->next = item;
        *sprite_list = item;
    }
}

sprite_list_t *sprite_list_pop(sprite_list_t **sprite_list)
{
    sprite_list_t *item = *sprite_list;

    if (!*(sprite_list))
        return (NULL);
    if (*sprite_list != (*sprite_list)->next) {
        item->prev->next = item->next;
        item->next->prev = item->prev;
        *sprite_list = item->next;
    } else
        *sprite_list = NULL;
    return (item);
}

void sprite_list_remove(sprite_list_t **sprite_list, int id)
{
    sprite_list_t *loop = *sprite_list;
    sprite_list_t *item = NULL;

    if (!(*sprite_list))
        return;
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

void sprite_list_delete(sprite_list_t *sprite_list)
{
    sprite_list_t *item = NULL;

    if (!sprite_list)
        return;
    do {
        item = sprite_list_pop(&sprite_list);
        sprite_delete(item->spt);
        free(item);
    } while (sprite_list != NULL);
}