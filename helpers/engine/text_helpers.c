/*
** EPITECH PROJECT, 2018
** text_helpers.c
** File description:
** No description
*/

#include "engine/components/global.h"
#include "engine/components/text.h"

void text_display(text_t *text, global_t *global)
{
    if (text) {
        sfRenderWindow_drawText(global->win, text->obj, NULL);
    }
}