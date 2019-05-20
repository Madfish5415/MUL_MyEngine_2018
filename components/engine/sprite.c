/*
** EPITECH PROJECT, 2018
** sprite.c
** File description:
** No description
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "engine/components/sprite.h"
#include "engine/utils/rectangle.h"
#include "engine/utils/vector.h"

sprite_t *sprite_create(const char *path)
{
    sprite_t *sprite = malloc(sizeof(sprite_t));
    sfVector2u size;

    if (!sprite)
        return (sprite);
    sprite->obj = sfSprite_create();
    sprite->txtr = sfTexture_createFromFile(path, NULL);
    if (!sprite->obj || !sprite->txtr)
        return (NULL);
    size = sfTexture_getSize(sprite->txtr);
    sprite->rect = rect_i(0, 0, size.x, size.y);
    sprite->pos = vect_f(0, 0);
    sfSprite_setTexture(sprite->obj, sprite->txtr, sfTrue);
    sfSprite_setTextureRect(sprite->obj, sprite->rect);
    sfSprite_setPosition(sprite->obj, sprite->pos);
    return (sprite);
}

void sprite_set_txtr(sprite_t *sprite, const char *path)
{
    if (!sprite || !sprite->obj || !sprite->txtr)
        return;
    sfTexture_destroy(sprite->txtr);
    sprite->txtr = sfTexture_createFromFile(path, NULL);
    sprite->rect.width = sfTexture_getSize(sprite->txtr).x;
    sprite->rect.height = sfTexture_getSize(sprite->txtr).y;
    sfSprite_setTexture(sprite->obj, sprite->txtr, sfTrue);
    sfSprite_setTextureRect(sprite->obj, sprite->rect);
}

void sprite_set_rect(sprite_t *sprite, sfIntRect rect)
{
    if (!sprite || !sprite->obj) return;
    sprite->rect = rect;
    sfSprite_setTextureRect(sprite->obj, sprite->rect);
}

void sprite_set_pos(sprite_t *sprite, sfVector2f pos)
{
    if (!sprite || !sprite->obj)
        return;
    sprite->pos = pos;
    sfSprite_setPosition(sprite->obj, sprite->pos);
}

void sprite_delete(sprite_t *sprite)
{
    if (!sprite || !sprite->obj || !sprite->txtr)
        return;
    sfTexture_destroy(sprite->txtr);
    sfSprite_destroy(sprite->obj);
    free(sprite);
}