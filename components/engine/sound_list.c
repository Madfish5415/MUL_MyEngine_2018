/*
** EPITECH PROJECT, 2018
** sound_list.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/sound.h"
#include "engine/components/sound_list.h"

static sound_list_t *sound_list_item(sound_t *sound, int id)
{
    sound_list_t *item = malloc(sizeof(sound_list_t));

    if (!item)
        return (NULL);
    item->snd = sound;
    item->id = id;
    return (item);
}

void sound_list_add(sound_list_t **sound_list, sound_t *sound, int id)
{
    sound_list_t *item = sound_list_item(sound, id);

    if (!item)
        return;
    if (*sound_list) {
        item->prev = (*sound_list)->prev;
        item->next = *sound_list;
        item->prev->next = item;
        item->next->prev = item;
    } else {
        item->prev = item;
        item->next = item;
        *sound_list = item;
    }
}

sound_list_t *sound_list_pop(sound_list_t **sound_list)
{
    sound_list_t *item = *sound_list;

    if (!*(sound_list))
        return (NULL);
    if (*sound_list != (*sound_list)->next) {
        item->prev->next = item->next;
        item->next->prev = item->prev;
        *sound_list = item->next;
    } else
        *sound_list = NULL;
    return (item);
}

void sound_list_remove(sound_list_t **sound_list, int id)
{
    sound_list_t *loop = *sound_list;
    sound_list_t *item = NULL;

    if (!(*sound_list))
        return;
    do {
        if (loop->id == id) {
            item = sound_list_pop(&loop);
            sound_delete(item->snd);
            free(item);
            *sound_list = (loop) ? loop : NULL;
            break;
        }
        loop = loop->next;
    } while (loop != *sound_list);
}

void sound_list_delete(sound_list_t *sound_list)
{
    sound_list_t *item = NULL;

    if (!sound_list)
        return;
    do {
        item = sound_list_pop(&sound_list);
        sound_delete(item->snd);
        free(item);
    } while (sound_list != NULL);
}