/*
** EPITECH PROJECT, 2018
** text_list.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/text.h"
#include "engine/components/text_list.h"

void text_list_add(text_list_t **text_list, text_t *text, int id)
{
    text_list_t *item = malloc(sizeof(text_list_t));
    text_list_t *first = NULL;
    text_list_t *last = NULL;

    item->text = text;
    item->id = id;
    if (*text_list) {
        first = *text_list;
        last = first->prev;
        item->prev = last;
        item->next = first;
        first->prev = item;
        last->next = item;
    } else {
        item->prev = item;
        item->next = item;
        *text_list = item;
    }
}

text_t *text_list_get(text_list_t *text_list, int id)
{
    text_list_t *loop = text_list;

    if (text_list) {
        do {
            if (loop->id == id)
                return (loop->text);
            loop = loop->next;
        } while (loop != text_list);
    }
    return (NULL);
}

void text_list_remove(text_list_t **text_list, int id)
{
    text_list_t *loop = *text_list;
    text_list_t *item = NULL;

    if (*text_list) {
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
}

text_list_t *text_list_pop(text_list_t **text_list)
{
    text_list_t *item = *text_list;
    text_list_t *prev = NULL;
    text_list_t *next = NULL;

    if (*text_list) {
        if (item != item->next) {
            prev = item->prev;
            next = item->next;
            prev->next = next;
            next->prev = prev;
            *text_list = next;
        } else
            *text_list = NULL;
        item->prev = NULL;
        item->next = NULL;
    }
    return (item);
}

void text_list_delete(text_list_t *text_list)
{
    text_list_t *item = NULL;

    if (text_list) {
        do {
            item = text_list_pop(&text_list);
            text_delete(item->text);
            free(item);
        } while (text_list != NULL);
    }
}