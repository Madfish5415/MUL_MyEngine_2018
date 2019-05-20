/*
** EPITECH PROJECT, 2018
** music_list_helpers.c
** File description:
** No description
*/

#include "engine/components/music.h"
#include "engine/components/music_list.h"

void music_list_play(music_list_t *music_list, int id)
{
    music_list_t *loop = music_list;

    if (!music_list)
        return;
    do {
        if ((loop->id == id) || (id == 0))
            music_play(loop->msc);
        loop = loop->next;
    } while (loop != music_list);
}

void music_list_pause(music_list_t *music_list, int id)
{
    music_list_t *loop = music_list;

    if (!music_list)
        return;
    do {
        if ((loop->id == id) || (id == 0))
            music_pause(loop->msc);
        loop = loop->next;
    } while (loop != music_list);
}

void music_list_set_volume(music_list_t *music_list, float vol, int id)
{
    music_list_t *loop = music_list;

    if (!music_list)
        return;
    do {
        if ((loop->id == id) || (id == 0))
            music_set_volume(loop->msc, vol);
        loop = loop->next;
    } while (loop != music_list);
}

void music_list_stop(music_list_t *music_list, int id)
{
    music_list_t *loop = music_list;

    if (!music_list)
        return;
    do {
        if ((loop->id == id) || (id == 0))
            music_stop(loop->msc);
        loop = loop->next;
    } while (loop != music_list);
}