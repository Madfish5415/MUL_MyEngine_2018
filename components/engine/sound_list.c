/*
** EPITECH PROJECT, 2018
** sound_list.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/sound.h"
#include "engine/components/sound_list.h"

void sound_list_add(sound_list_t **sound_list, sound_t *sound, int id)
{
    sound_list_t *item = malloc(sizeof(sound_list_t));
    sound_list_t *first = NULL;
    sound_list_t *last = NULL;

    item->snd = sound;
    item->id = id;
    if (*sound_list) {
        first = *sound_list;
        last = first->prev;
        item->prev = last;
        item->next = first;
        first->prev = item;
        last->next = item;
    } else {
        item->prev = item;
        item->next = item;
        *sound_list = item;
    }
}

sound_t *sound_list_get(sound_list_t *sound_list, int id)
{
    sound_list_t *loop = sound_list;

    if (sound_list) {
        do {
            if (loop->id == id)
                return (loop->snd);
            loop = loop->next;
        } while (loop != sound_list);
    }
    return (NULL);
}

void sound_list_remove(sound_list_t **sound_list, int id)
{
    sound_list_t *start = *sound_list;
    sound_list_t *loop = *sound_list;
    sound_list_t *item = NULL;

    if (*sound_list) {
        do {
            if (loop->id == id) {
                item = sound_list_pop(&loop);
                start = (start->id == id) ? loop : start;
                *sound_list = start;
                sound_delete(item->snd);
                free(item);
                break;
            }
            loop = loop->next;
        } while (loop != *sound_list);
    }
}

sound_list_t *sound_list_pop(sound_list_t **sound_list)
{
    sound_list_t *item = *sound_list;
    sound_list_t *prev = NULL;
    sound_list_t *next = NULL;

    if (*sound_list) {
        if (item != item->next) {
            prev = item->prev;
            next = item->next;
            prev->next = next;
            next->prev = prev;
            *sound_list = next;
        } else
            *sound_list = NULL;
        item->prev = NULL;
        item->next = NULL;
    }
    return (item);
}

void sound_list_delete(sound_list_t *sound_list)
{
    sound_list_t *item = NULL;

    if (sound_list) {
        do {
            item = sound_list_pop(&sound_list);
            sound_delete(item->snd);
            free(item);
        } while (sound_list != NULL);
    }
}