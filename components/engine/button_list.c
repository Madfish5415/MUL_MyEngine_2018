/*
** EPITECH PROJECT, 2018
** button_list.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/button.h"
#include "engine/components/button_list.h"

static button_list_t *button_list_item(button_t *button, int id)
{
    button_list_t *item = malloc(sizeof(button_list_t));

    if (!item)
        return (NULL);
    item->btn = button;
    item->id = id;
    return (item);
}

void button_list_add(button_list_t **button_list,
                        button_t *button, int id)
{
    button_list_t *item = button_list_item(button, id);

    if (!item)
        return;
    if (*button_list) {
        item->prev = (*button_list)->prev;
        item->next = *button_list;
        item->prev->next = item;
        item->next->prev = item;
    } else {
        item->prev = item;
        item->next = item;
        *button_list = item;
    }
}

button_list_t *button_list_pop(button_list_t **button_list)
{
    button_list_t *item = *button_list;

    if (!*(button_list))
        return (NULL);
    if (*button_list != (*button_list)->next) {
        item->prev->next = item->next;
        item->next->prev = item->prev;
        *button_list = item->next;
    } else
        *button_list = NULL;
    return (item);
}

void button_list_remove(button_list_t **button_list, int id)
{
    button_list_t *loop = *button_list;
    button_list_t *item = NULL;

    if (!(*button_list))
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