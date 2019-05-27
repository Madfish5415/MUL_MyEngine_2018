/*
** EPITECH PROJECT, 2018
** music_list.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/music.h"
#include "engine/components/music_list.h"

static music_list_t *music_list_item(music_t *music, int id)
{
    music_list_t *item = malloc(sizeof(music_list_t));

    if (!item)
        return (NULL);
    item->msc = music;
    item->id = id;
    return (item);
}

void music_list_add(music_list_t **music_list, music_t *music, int id)
{
    music_list_t *item = music_list_item(music, id);

    if (!item)
        return;
    if (*music_list) {
        item->prev = (*music_list)->prev;
        item->next = *music_list;
        item->prev->next = item;
        item->next->prev = item;
    } else {
        item->prev = item;
        item->next = item;
        *music_list = item;
    }
}

music_list_t *music_list_pop(music_list_t **music_list)
{
    music_list_t *item = *music_list;

    if (!*(music_list))
        return (NULL);
    if (*music_list != (*music_list)->next) {
        item->prev->next = item->next;
        item->next->prev = item->prev;
        *music_list = item->next;
    } else
        *music_list = NULL;
    return (item);
}

void music_list_remove(music_list_t **music_list, int id)
{
    music_list_t *loop = *music_list;
    music_list_t *item = NULL;

    if (!(*music_list))
        return;
    do {
        if (loop->id == id) {
            item = music_list_pop(&loop);
            music_delete(item->msc);
            free(item);
            *music_list = (loop) ? loop : NULL;
            break;
        }
        loop = loop->next;
    } while (loop != *music_list);
}

void music_list_delete(music_list_t *music_list)
{
    music_list_t *item = NULL;

    if (!music_list)
        return;
    do {
        item = music_list_pop(&music_list);
        music_delete(item->msc);
        free(item);
    } while (music_list != NULL);
}