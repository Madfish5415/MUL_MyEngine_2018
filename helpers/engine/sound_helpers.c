/*
** EPITECH PROJECT, 2018
** sound_helpers.c
** File description:
** No description
*/

#include <SFML/Audio.h>
#include "engine/components/sound.h"

void sound_play(sound_t *sound)
{
    sfSoundStatus status;

    if (sound) {
        status = sfSound_getStatus(sound->obj);
        if (status == sfPaused)
            sfSound_stop(sound->obj);
        sfSound_play(sound->obj);
    }
}

void sound_pause(sound_t *sound)
{
    sfSoundStatus status;

    if (sound) {
        status = sfSound_getStatus(sound->obj);
        if (status == sfPlaying)
            sfSound_pause(sound->obj);
        else if (status == sfPaused)
            sfSound_play(sound->obj);
    }
}

void sound_stop(sound_t *sound)
{
    if (sound) {
        sfSound_stop(sound->obj);
    }
}