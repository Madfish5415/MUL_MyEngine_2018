/*
** EPITECH PROJECT, 2018
** value_list.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/value.h"
#include "engine/components/value_list.h"

void value_list_add(value_list_t **value_list, value_t *value, int id)
{
    value_list_t *item = malloc(sizeof(value_list_t));
    value_list_t *first = NULL;
    value_list_t *last = NULL;

    item->val = value;
    item->id = id;
    if (*value_list) {
        first = *value_list;
        last = first->prev;
        item->prev = last;
        item->next = first;
        first->prev = item;
        last->next = item;
    } else {
        item->prev = item;
        item->next = item;
        *value_list = item;
    }
}

value_t *value_list_get(value_list_t *value_list, int id)
{
    value_list_t *loop = value_list;

    if (value_list) {
        do {
            if (loop->id == id)
                return (loop->val);
            loop = loop->next;
        } while (loop != value_list);
    }
    return (NULL);
}

void value_list_remove(value_list_t **value_list, int id)
{
    value_list_t *loop = *value_list;
    value_list_t *item = NULL;

    if (*value_list) {
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
}

value_list_t *value_list_pop(value_list_t **value_list)
{
    value_list_t *item = *value_list;
    value_list_t *prev = NULL;
    value_list_t *next = NULL;

    if (*value_list) {
        if (item != item->next) {
            prev = item->prev;
            next = item->next;
            prev->next = next;
            next->prev = prev;
            *value_list = next;
        } else
            *value_list = NULL;
        item->prev = NULL;
        item->next = NULL;
    }
    return (item);
}

void value_list_delete(value_list_t *value_list)
{
    value_list_t *item = NULL;

    if (value_list) {
        do {
            item = value_list_pop(&value_list);
            value_delete(item->val);
            free(item);
        } while (value_list != NULL);
    }
}