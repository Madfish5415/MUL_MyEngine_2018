/*
** EPITECH PROJECT, 2018
** music_list.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_MUSIC_LIST_H
#define MUL_MYENGINE_2018_COMPONENTS_MUSIC_LIST_H

/**
* @file
*/

#include "music.h"

/**
* @brief Music list component
*/
typedef struct music_list_s {
    music_t *msc;
    int id;
    struct music_list_s *prev;
    struct music_list_s *next;
} music_list_t;

/**
* @brief Add a music to a music list
*
* @param music_list
* @param music
* @param id
*/
void music_list_add(music_list_t **music_list, music_t *music, int id);

/**
* @brief Remove a music from a music list
*
* @param music_list
* @param id
*/
void music_list_remove(music_list_t **music_list, int id);

/**
* @brief Remove and return the current music list item from a music list
*
* @param music_list
* @return
*/
music_list_t *music_list_pop(music_list_t **music_list);

/**
* @brief Delete a music list
*
* @param music_list
*/
void music_list_delete(music_list_t *music_list);

/**
* @brief Get a music from a music list
*
* @param music_list
* @param id
* @return
*/
music_t *music_list_get(music_list_t *music_list, int id);

/**
* @brief Play the musics related to the specified id
*
* @param music_list
* @param id
*/
void music_list_play(music_list_t *music_list, int id);

/**
* @brief Pause the musics related to the specified id
*
* @param music_list
* @param id
*/
void music_list_pause(music_list_t *music_list, int id);

/**
* @brief Set the volume of the musics related to the specified id
*
* @param music_list
* @param id
*/
void music_list_set_volume(music_list_t *music_list, float vol, int id);

/**
* @brief Stop the musics related to the specified id
*
* @param music_list
* @param id
*/
void music_list_stop(music_list_t *music_list, int id);

#endif // MUL_MYENGINE_2018_COMPONENTS_MUSIC_LIST_H
