/*
** EPITECH PROJECT, 2018
** sprite.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_SPRITE_H
#define MUL_MYENGINE_2018_COMPONENTS_SPRITE_H

/**
* @file
*/

#include <SFML/Graphics.h>
#include "global.h"

/**
* @brief Sprite component
*/
typedef struct sprite_s {
    sfSprite *obj;
    sfTexture *txtr;
    sfIntRect rect;
    sfVector2f pos;
} sprite_t;

/**
* @brief Create a sprite
*
* @param path
* @return
*/
sprite_t *sprite_create(const char *path);

/**
* @brief Set the texture of a sprite
*
* @param sprite
* @param path
*/
void sprite_set_txtr(sprite_t *sprite, const char *path);

/**
* @brief Set the rectangle of a sprite
*
* @param sprite
* @param rect
*/
void sprite_set_rect(sprite_t *sprite, sfIntRect rect);

/**
* @brief Set the position of a sprite
*
* @param spt
* @param pos
*/
void sprite_set_pos(sprite_t *spt, sfVector2f pos);

/**
* @brief Delete a sprite
*
* @param spt
*/
void sprite_delete(sprite_t *spt);

/**
* @brief Display a sprite
*
* @param sprite
* @param global
*/
void sprite_display(sprite_t *sprite, global_t *global);

#endif // MUL_MYENGINE_2018_COMPONENTS_SPRITE_H
