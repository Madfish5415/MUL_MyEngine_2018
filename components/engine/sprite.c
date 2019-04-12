/*
** EPITECH PROJECT, 2018
** sprite.c
** File description:
** No description
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "engine/components/sprite.h"

sprite_t *sprite_create(const char *path)
{
    sprite_t *sprite = malloc(sizeof(sprite_t));
    sfTexture *txtr = sfTexture_createFromFile(path, NULL);
    sfVector2u size = sfTexture_getSize(txtr);
    sfIntRect rect = {0, 0, size.x, size.y};
    sfVector2f pos = {0, 0};

    if (sprite) {
        sprite->obj = sfSprite_create();
        sprite->txtr = txtr;
        sprite->rect = rect;
        sprite->pos = pos;
        sfSprite_setTexture(sprite->obj, sprite->txtr, sfTrue);
        sfSprite_setTextureRect(sprite->obj, sprite->rect);
        sfSprite_setPosition(sprite->obj, sprite->pos);
    }
    return (sprite);
}

void sprite_set_txtr(sprite_t *sprite, const char *path)
{
    if (sprite) {
        sfTexture_destroy(sprite->txtr);
        sprite->txtr = sfTexture_createFromFile(path, NULL);
        sprite->rect.width = sfTexture_getSize(sprite->txtr).x;
        sprite->rect.height = sfTexture_getSize(sprite->txtr).y;
        sfSprite_setTexture(sprite->obj, sprite->txtr, sfTrue);
        sfSprite_setTextureRect(sprite->obj, sprite->rect);
    }
}

void sprite_set_rect(sprite_t *sprite, sfIntRect rect)
{
    if (sprite) {
        sprite->rect = rect;
        sfSprite_setTextureRect(sprite->obj, sprite->rect);
    }
}

void sprite_set_pos(sprite_t *sprite, sfVector2f pos)
{
    if (sprite) {
        sprite->pos = pos;
        sfSprite_setPosition(sprite->obj, sprite->pos);
    }
}

void sprite_delete(sprite_t *sprite)
{
    if (sprite) {
        sfTexture_destroy(sprite->txtr);
        sfSprite_destroy(sprite->obj);
        free(sprite);
    }
}