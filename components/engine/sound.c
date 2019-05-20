/*
** EPITECH PROJECT, 2018
** sound.c
** File description:
** No description
*/

#include <SFML/Audio.h>
#include <stdlib.h>
#include "engine/components/sound.h"

sound_t *sound_create(const char *path, float vol)
{
    sound_t *sound = malloc(sizeof(sound_t));

    if (!sound)
        return (NULL);
    sound->obj = sfSound_create();
    sound->buf = sfSoundBuffer_createFromFile(path);
    sound->vol = vol;
    if (!sound->obj || !sound->buf)
        return (NULL);
    sfSound_setBuffer(sound->obj, sound->buf);
    sfSound_setVolume(sound->obj, sound->vol);
    return (sound);
}

void sound_set_volume(sound_t *sound, float vol)
{
    if (!sound || !sound->obj)
        return;
    sound->vol = vol;
    sfSound_setVolume(sound->obj, sound->vol);
}

void sound_delete(sound_t *sound)
{
    if (!sound || !sound->obj || !sound->buf)
        return;
    sfSoundBuffer_destroy(sound->buf);
    sfSound_destroy(sound->obj);
    free(sound);
}