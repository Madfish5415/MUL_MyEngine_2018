/*
** EPITECH PROJECT, 2018
** music_list.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/music.h"
#include "engine/components/music_list.h"

void music_list_add(music_list_t **music_list, music_t *music, int id)
{
    music_list_t *item = malloc(sizeof(music_list_t));
    music_list_t *first = NULL;
    music_list_t *last = NULL;

    item->msc = music;
    item->id = id;
    if (*music_list) {
        first = *music_list;
        last = first->prev;
        item->prev = last;
        item->next = first;
        first->prev = item;
        last->next = item;
    } else {
        item->prev = item;
        item->next = item;
        *music_list = item;
    }
}

music_t *music_list_get(music_list_t *music_list, int id)
{
    music_list_t *loop = music_list;

    if (music_list) {
        do {
            if (loop->id == id)
                return (loop->msc);
            loop = loop->next;
        } while (loop != music_list);
    }
    return (NULL);
}

void music_list_remove(music_list_t **music_list, int id)
{
    music_list_t *loop = *music_list;
    music_list_t *item = NULL;

    if (*music_list) {
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
}

music_list_t *music_list_pop(music_list_t **music_list)
{
    music_list_t *item = *music_list;
    music_list_t *prev = NULL;
    music_list_t *next = NULL;

    if (*music_list) {
        if (item != item->next) {
            prev = item->prev;
            next = item->next;
            prev->next = next;
            next->prev = prev;
            *music_list = next;
        } else
            *music_list = NULL;
        item->prev = NULL;
        item->next = NULL;
    }
    return (item);
}

void music_list_delete(music_list_t *music_list)
{
    music_list_t *item = NULL;

    if (music_list) {
        do {
            item = music_list_pop(&music_list);
            music_delete(item->msc);
            free(item);
        } while (music_list != NULL);
    }
}