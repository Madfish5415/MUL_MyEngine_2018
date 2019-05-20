/*
** EPITECH PROJECT, 2018
** sound_list_helpers.c
** File description:
** No description
*/

#include "engine/components/sound.h"
#include "engine/components/sound_list.h"

void sound_list_play(sound_list_t *sound_list, int id)
{
    sound_list_t *loop = sound_list;

    if (!sound_list)
        return;
    do {
        if ((loop->id == id) || (id == 0))
            sound_play(loop->snd);
        loop = loop->next;
    } while (loop != sound_list);
}

void sound_list_pause(sound_list_t *sound_list, int id)
{
    sound_list_t *loop = sound_list;

    if (!sound_list)
        return;
    do {
        if ((loop->id == id) || (id == 0))
            sound_pause(loop->snd);
        loop = loop->next;
    } while (loop != sound_list);
}

void sound_list_set_volume(sound_list_t *sound_list, float vol, int id)
{
    sound_list_t *loop = sound_list;

    if (!sound_list)
        return;
    do {
        if ((loop->id == id) || (id == 0))
            sound_set_volume(loop->snd, vol);
        loop = loop->next;
    } while (loop != sound_list);
}

void sound_list_stop(sound_list_t *sound_list, int id)
{
    sound_list_t *loop = sound_list;

    if (!sound_list)
        return;
    do {
        if ((loop->id == id) || (id == 0))
            sound_stop(loop->snd);
        loop = loop->next;
    } while (loop != sound_list);
}