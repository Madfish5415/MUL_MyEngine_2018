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

    if (!text_list)
        return;
    do {
        if ((loop->id == id) || (id == 0))
            text_display(loop->text, global);
        loop = loop->next;
    } while (loop != text_list);
}

text_t *text_list_get(text_list_t *text_list, int id)
{
    text_list_t *loop = text_list;

    if (!text_list)
        return (NULL);
    do {
        if (loop->id == id)
            return (loop->text);
        loop = loop->next;
    } while (loop != text_list);
    return (NULL);
}