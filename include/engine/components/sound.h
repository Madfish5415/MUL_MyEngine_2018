/*
** EPITECH PROJECT, 2018
** sound.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_SOUND_H
#define MUL_MYENGINE_2018_COMPONENTS_SOUND_H

/**
* @file
*/

#include <SFML/Audio.h>

/**
* @brief Sound component
*/
typedef struct sound_s {
    sfSound *obj;
    sfSoundBuffer *buf;
    float vol;
} sound_t;

/**
* @brief Create a sound
*
* @param path
* @param vol
* @return
*/
sound_t *sound_create(const char *path, float vol);

/**
* @brief Set the volume of a sound
*
* @param sound
* @param vol
*/
void sound_set_volume(sound_t *sound, float vol);

/**
* @brief Delete a sound
*
* @param sound
*/
void sound_delete(sound_t *sound);

/**
* @brief Play a sound
*
* @param sound
*/
void sound_play(sound_t *sound);

/**
* @brief Pause a sound
*
* @param sound
*/
void sound_pause(sound_t *sound);

/**
* @brief Stop a sound
*
* @param sound
*/
void sound_stop(sound_t *sound);

#endif // MUL_MYENGINE_2018_COMPONENTS_SOUND_H
