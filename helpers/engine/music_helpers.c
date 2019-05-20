/*
** EPITECH PROJECT, 2018
** music_helpers.c
** File description:
** No description
*/

#include <SFML/Audio.h>
#include "engine/components/music.h"

void music_play(music_t *music)
{
    if (!music)
        return;
    sfMusic_play(music->obj);
}

void music_pause(music_t *music)
{
    sfSoundStatus status;

    if (!music)
        return;
    status = sfMusic_getStatus(music->obj);
    if (status == sfPlaying)
        sfMusic_pause(music->obj);
    else if (status == sfPaused)
        sfMusic_play(music->obj);
}

void music_stop(music_t *music)
{
    if (!music)
        return;
    sfMusic_stop(music->obj);
}