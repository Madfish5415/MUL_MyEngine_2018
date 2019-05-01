/*
** EPITECH PROJECT, 2018
** sprite_list.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_SPRITE_LIST_H
#define MUL_MYENGINE_2018_COMPONENTS_SPRITE_LIST_H

/**
* @file
*/

#include "global.h"
#include "sprite.h"

/**
* @brief Sprite list component
*/
typedef struct sprite_list_s {
    sprite_t *spt;
    int id;
    struct sprite_list_s *prev;
    struct sprite_list_s *next;
} sprite_list_t;

/**
* @brief Add a sprite to a sprite list
*
* @param sprite_list
* @param sprite
* @param id
*/
void sprite_list_add(sprite_list_t **sprite_list, sprite_t *sprite, int id);

/**
* @brief Get a sprite from a sprite list
*
* @param sprite_list
* @param id
* @return
*/
sprite_t *sprite_list_get(sprite_list_t *sprite_list, int id);

/**
* @brief Remove a sprite from a sprite list
*
* @param sprite_list
* @param id
*/
void sprite_list_remove(sprite_list_t **sprite_list, int id);

/**
* @brief Remove and return the current sprite list item from a sprite list
*
* @param sprite_list
* @return
*/
sprite_list_t *sprite_list_pop(sprite_list_t **sprite_list);

/**
* @brief Delete a sprite list
*
* @param sprite_list
*/
void sprite_list_delete(sprite_list_t *sprite_list);

/**
* @brief Display the sprites related to the specified id
*
* @param sprite_list
* @param global
* @param id
*/
void sprite_list_display(sprite_list_t *sprite_list, global_t *global, int id);

#endif // MUL_MYENGINE_2018_COMPONENTS_SPRITE_LIST_H
