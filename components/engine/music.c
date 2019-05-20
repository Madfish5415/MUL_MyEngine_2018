/*
** EPITECH PROJECT, 2018
** music.c
** File description:
** No description
*/

#include <SFML/Audio.h>
#include <stdlib.h>
#include "engine/components/music.h"

music_t *music_create(const char *path, float vol, sfBool loop)
{
    music_t *music = malloc(sizeof(music_t));

    if (!music)
        return (NULL);
    music->obj = sfMusic_createFromFile(path);
    music->vol = vol;
    if (!music->obj)
        return (NULL);
    sfMusic_setVolume(music->obj, music->vol);
    sfMusic_setLoop(music->obj, loop);
    return (music);
}

void music_set_volume(music_t *music, float vol)
{
    if (!music)
        return;
    music->vol = vol;
    sfMusic_setVolume(music->obj, music->vol);
}

void music_delete(music_t *music)
{
    if (!music)
        return;
    sfMusic_destroy(music->obj);
    free(music);
}