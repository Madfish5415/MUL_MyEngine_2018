/*
** EPITECH PROJECT, 2018
** rclock_list.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/rclock.h"
#include "engine/components/rclock_list.h"

rclock_list_t *rclock_list_create(int nbr)
{
    rclock_list_t *rclock_list = NULL;
    rclock_t *rclock = NULL;

    for (int i = 1; i <= nbr; ++i) {
        rclock = rclock_create();
        rclock_list_add(&rclock_list, rclock, i);
    }
    return (rclock_list);
}

void rclock_list_add(rclock_list_t **rclock_list, rclock_t *rclock, int id)
{
    rclock_list_t *item = malloc(sizeof(rclock_list_t));
    rclock_list_t *first = NULL;
    rclock_list_t *last = NULL;

    item->rclk = rclock;
    item->id = id;
    if (*rclock_list) {
        first = *rclock_list;
        last = first->prev;
        item->prev = last;
        item->next = first;
        first->prev = item;
        last->next = item;
    } else {
        item->prev = item;
        item->next = item;
        *rclock_list = item;
    }
}

rclock_t *rclock_list_get(rclock_list_t *rclock_list, int id)
{
    rclock_list_t *loop = rclock_list;

    if (rclock_list) {
        do {
            if (loop->id == id)
                return (loop->rclk);
            loop = loop->next;
        } while (loop != rclock_list);
    }
    return (NULL);
}

rclock_list_t *rclock_list_pop(rclock_list_t **rclock_list)
{
    rclock_list_t *item = *rclock_list;
    rclock_list_t *prev = NULL;
    rclock_list_t *next = NULL;

    if (*rclock_list) {
        if (item != item->next) {
            prev = item->prev;
            next = item->next;
            prev->next = next;
            next->prev = prev;
            *rclock_list = next;
        } else
            *rclock_list = NULL;
        item->prev = NULL;
        item->next = NULL;
    }
    return (item);
}

void rclock_list_delete(rclock_list_t *rclock_list)
{
    rclock_list_t *item = NULL;

    if (rclock_list) {
        do {
            item = rclock_list_pop(&rclock_list);
            rclock_delete(item->rclk);
            free(item);
        } while (rclock_list != NULL);
    }
}