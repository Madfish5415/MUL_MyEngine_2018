/*
** EPITECH PROJECT, 2018
** sound_list.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_SOUND_LIST_H
#define MUL_MYENGINE_2018_COMPONENTS_SOUND_LIST_H

/**
* @file
*/

#include "sound.h"

/**
* @brief Sound list component
*/
typedef struct sound_list_s {
    sound_t *snd;
    int id;
    struct sound_list_s *prev;
    struct sound_list_s *next;
} sound_list_t;

/**
* @brief Add a sound to a sound list
*
* @param sound_list
* @param sound
* @param id
*/
void sound_list_add(sound_list_t **sound_list, sound_t *sound, int id);

/**
* @brief Remove a sound from a sound list
*
* @param sound_list
* @param id
*/
void sound_list_remove(sound_list_t **sound_list, int id);

/**
* @brief Remove and return the current sound list item from a sound list
*
* @param sound_list
* @return
*/
sound_list_t *sound_list_pop(sound_list_t **sound_list);

/**
* @brief Delete a sound list
*
* @param sound_list
*/
void sound_list_delete(sound_list_t *sound_list);

/**
* @brief Get a sound from a sound list
*
* @param sound_list
* @param id
* @return
*/
sound_t *sound_list_get(sound_list_t *sound_list, int id);

/**
* @brief Play the music related to the specified id
*
* @param sound_list
* @param id
*/
void sound_list_play(sound_list_t *sound_list, int id);

/**
* @brief Pause the music related to the specified id
*
* @param sound_list
* @param id
*/
void sound_list_pause(sound_list_t *sound_list, int id);

/**
* @brief Set the volume of the music related to the specified id
*
* @param sound_list
* @param vol
* @param id
*/
void sound_list_set_volume(sound_list_t *sound_list, float vol, int id);

/**
* @brief Stop the music related to the specified id
*
* @param sound_list
* @param id
*/
void sound_list_stop(sound_list_t *sound_list, int id);

#endif // MUL_MYENGINE_2018_COMPONENTS_SOUND_LIST_H
