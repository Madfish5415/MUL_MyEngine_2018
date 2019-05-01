/*
** EPITECH PROJECT, 2018
** music.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_MUSIC_H
#define MUL_MYENGINE_2018_COMPONENTS_MUSIC_H

/**
* @file
*/

#include <SFML/Audio.h>
#include <SFML/Config.h>

/**
* @brief Music component
*/
typedef struct music_s {
    sfMusic *obj;
    float vol;
    sfBool loop;
} music_t;

/**
* @brief Create a music
*
* @param path
* @param vol
* @param loop
* @return
*/
music_t *music_create(const char *path, float vol, sfBool loop);

/**
* @brief Set the volume of a music
*
* @param music
* @param vol
*/
void music_set_volume(music_t *music, float vol);

/**
* @brief Delete a music
*
* @param music
*/
void music_delete(music_t *music);

/**
* @brief Play a music
*
* @param music
*/
void music_play(music_t *music);

/**
* @brief Pause a music
*
* @param music
*/
void music_pause(music_t *music);

/**
* @brief Stop a music
*
* @param music
*/
void music_stop(music_t *music);

#endif // MUL_MYENGINE_2018_COMPONENTS_MUSIC_H
