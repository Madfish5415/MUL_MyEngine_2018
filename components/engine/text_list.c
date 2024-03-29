/*
** EPITECH PROJECT, 2018
** text_list.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/text.h"
#include "engine/components/text_list.h"

static text_list_t *text_list_item(text_t *text, int id)
{
    text_list_t *item = malloc(sizeof(text_list_t));

    if (!item)
        return (NULL);
    item->text = text;
    item->id = id;
    return (item);
}

void text_list_add(text_list_t **text_list, text_t *text, int id)
{
    text_list_t *item = text_list_item(text, id);

    if (!item)
        return;
    if (*text_list) {
        item->prev = (*text_list)->prev;
        item->next = *text_list;
        item->prev->next = item;
        item->next->prev = item;
    } else {
        item->prev = item;
        item->next = item;
        *text_list = item;
    }
}

text_list_t *text_list_pop(text_list_t **text_list)
{
    text_list_t *item = *text_list;

    if (!*(text_list))
        return (NULL);
    if (*text_list != (*text_list)->next) {
        item->prev->next = item->next;
        item->next->prev = item->prev;
        *text_list = item->next;
    } else
        *text_list = NULL;
    return (item);
}

void text_list_remove(text_list_t **text_list, int id)
{
    text_list_t *loop = *text_list;
    text_list_t *item = NULL;

    if (!(*text_list))
        return;
    do {
        if (loop->id == id) {
            item = text_list_pop(&loop);
            text_delete(item->text);
            free(item);
            *text_list = (loop) ? loop : NULL;
            break;
        }
        loop = loop->next;
    } while (loop != *text_list);
}

void text_list_delete(text_list_t *text_list)
{
    text_list_t *item = NULL;

    if (!text_list)
        return;
    do {
        item = text_list_pop(&text_list);
        text_delete(item->text);
        free(item);
    } while (text_list != NULL);
}