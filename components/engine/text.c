/*
** EPITECH PROJECT, 2018
** text.c
** File description:
** No description
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "engine/components/text.h"
#include "engine/utils/position.h"
#include "engine/externs.h"
#include "engine/utils.h"

text_t *text_create(const char *value, unsigned int size, const char *font)
{
    text_t *text = malloc(sizeof(text_t));
    sfVector2f pos = {0, 0};

    if (text) {
        text->obj = sfText_create();
        text->font = sfFont_createFromFile(font);
        sfText_setString(text->obj, value);
        sfText_setCharacterSize(text->obj, size);
        sfText_setFont(text->obj, text->font);
        text->rect = sfText_getLocalBounds(text->obj);
        text->pos = pos;
        sfText_setOrigin(text->obj,
                pos_of_f(text->rect, POS_CENTER, POS_CENTER));
        sfText_setPosition(text->obj, pos);
    }
    return (text);
}

void text_set_font(text_t *text, const char *path)
{
    if (text) {
        sfFont_destroy(text->font);
        text->font = sfFont_createFromFile(path);
        sfText_setFont(text->obj, text->font);
        text->rect = sfText_getLocalBounds(text->obj);
    }
}

void text_set_value(text_t *text, const char *value, unsigned int size)
{
    if (text) {
        if (value)
            sfText_setString(text->obj, value);
        if (size > 0)
            sfText_setCharacterSize(text->obj, size);
        text->rect = sfText_getLocalBounds(text->obj);
        sfText_setOrigin(text->obj,
                pos_of_f(text->rect, POS_CENTER, POS_CENTER));
    }
}

void text_set_pos(text_t *text, sfVector2f pos)
{
    if (text) {
        text->pos = pos;
        sfText_setPosition(text->obj, pos);
    }
}

void text_delete(text_t *text)
{
    if (text) {
        sfFont_destroy(text->font);
        sfText_destroy(text->obj);
        free(text);
    }
}