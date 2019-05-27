/*
** EPITECH PROJECT, 2018
** value_list.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/value.h"
#include "engine/components/value_list.h"

static value_list_t *value_list_item(value_t *value, int id)
{
    value_list_t *item = malloc(sizeof(value_list_t));

    if (!item)
        return (NULL);
    item->val = value;
    item->id = id;
    return (item);
}

void value_list_add(value_list_t **value_list, value_t *value, int id)
{
    value_list_t *item = value_list_item(value, id);

    if (!item)
        return;
    if (*value_list) {
        item->prev = (*value_list)->prev;
        item->next = *value_list;
        item->prev->next = item;
        item->next->prev = item;
    } else {
        item->prev = item;
        item->next = item;
        *value_list = item;
    }
}

value_list_t *value_list_pop(value_list_t **value_list)
{
    value_list_t *item = *value_list;

    if (!*(value_list))
        return (NULL);
    if (*value_list != (*value_list)->next) {
        item->prev->next = item->next;
        item->next->prev = item->prev;
        *value_list = item->next;
    } else
        *value_list = NULL;
    return (item);
}

void value_list_remove(value_list_t **value_list, int id)
{
    value_list_t *loop = *value_list;
    value_list_t *item = NULL;

    if (!(*value_list))
        return;
    do {
        if (loop->id == id) {
            item = value_list_pop(&loop);
            value_delete(item->val);
            free(item);
            *value_list = (loop) ? loop : NULL;
            break;
        }
        loop = loop->next;
    } while (loop != *value_list);
}

void value_list_delete(value_list_t *value_list)
{
    value_list_t *item = NULL;

    if (!value_list)
        return;
    do {
        item = value_list_pop(&value_list);
        value_delete(item->val);
        free(item);
    } while (value_list != NULL);
}