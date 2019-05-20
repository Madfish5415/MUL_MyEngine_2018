/*
** EPITECH PROJECT, 2018
** button_list.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/button.h"
#include "engine/components/button_list.h"

void button_list_add(button_list_t **button_list, button_t *button, int id)
{
    button_list_t *item = malloc(sizeof(button_list_t));
    button_list_t *first = NULL;
    button_list_t *last = NULL;

    item->btn = button;
    item->id = id;
    if (*button_list) {
        first = *button_list;
        last = first->prev;
        item->prev = last;
        item->next = first;
        first->prev = item;
        last->next = item;
    } else {
        item->prev = item;
        item->next = item;
        *button_list = item;
    }
}

button_t *button_list_get(button_list_t *button_list, int id)
{
    button_list_t *loop = button_list;

    if (!button_list)
        return (NULL);
    do {
        if (loop->id == id)
            return (loop->btn);
        loop = loop->next;
    } while (loop != button_list);
    return (NULL);
}

void button_list_remove(button_list_t **button_list, int id)
{
    button_list_t *loop = *button_list;
    button_list_t *item = NULL;

    if (!*button_list)
        return;
    do {
        if (loop->id == id) {
            item = button_list_pop(&loop);
            button_delete(item->btn);
            free(item);
            *button_list = (loop) ? loop : NULL;
            break;
        }
        loop = loop->next;
    } while (loop != *button_list);
}

button_list_t *button_list_pop(button_list_t **button_list)
{
    button_list_t *item = *button_list;
    button_list_t *prev = NULL;
    button_list_t *next = NULL;

    if (!*button_list)
        return (NULL);
    if (item != item->next) {
        prev = item->prev;
        next = item->next;
        prev->next = next;
        next->prev = prev;
        *button_list = next;
    } else
        *button_list = NULL;
    item->prev = NULL;
    item->next = NULL;
    return (item);
}

void button_list_delete(button_list_t *button_list)
{
    button_list_t *item = NULL;

    if (!button_list)
        return;
    do {
        item = button_list_pop(&button_list);
        button_delete(item->btn);
        free(item);
    } while (button_list != NULL);
}