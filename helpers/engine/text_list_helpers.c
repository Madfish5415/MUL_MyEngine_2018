/*
** EPITECH PROJECT, 2018
** text_list_helpers.c
** File description:
** No description
*/

#include "engine/components/text.h"
#include "engine/components/text_list.h"

void text_list_display(text_list_t *text_list, global_t *global, int id)
{
    text_list_t *loop = text_list;

    if (text_list) {
        do {
            if ((loop->id == id) || (id == 0))
                text_display(loop->text, global);
            loop = loop->next;
        } while (loop != text_list);
    }
}