/*
** EPITECH PROJECT, 2018
** eclock_list.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/eclock.h"
#include "engine/components/eclock_list.h"

eclock_list_t *eclock_list_create(int nbr)
{
    eclock_list_t *eclock_list = NULL;
    eclock_t *eclock = NULL;

    for (int i = 1; i <= nbr; ++i) {
        eclock = eclock_create();
        if (eclock)
            eclock_list_add(&eclock_list, eclock, i);
    }
    return (eclock_list);
}

void eclock_list_add(eclock_list_t **eclock_list, eclock_t *eclock, int id)
{
    eclock_list_t *item = malloc(sizeof(eclock_list_t));

    if (!item)
        return;
    item->eclk = eclock;
    item->id = id;
    if (*eclock_list) {
        item->prev = (*eclock_list)->prev;
        item->next = *eclock_list;
        item->prev->next = item;
        item->next->prev = item;
    } else {
        item->prev = item;
        item->next = item;
        *eclock_list = item;
    }
}

eclock_list_t *eclock_list_pop(eclock_list_t **eclock_list)
{
    eclock_list_t *item = *eclock_list;

    if (!*(eclock_list))
        return (NULL);
    if (*eclock_list != (*eclock_list)->next) {
        item->prev->next = item->next;
        item->next->prev = item->prev;
        *eclock_list = item->next;
    } else
        *eclock_list = NULL;
    return (item);
}

void eclock_list_remove(eclock_list_t **eclock_list, int id)
{
    eclock_list_t *loop = *eclock_list;
    eclock_list_t *item = NULL;

    if (!(*eclock_list))
        return;
    do {
        if (loop->id == id) {
            item = eclock_list_pop(&loop);
            eclock_delete(item->eclk);
            free(item);
            *eclock_list = (loop) ? loop : NULL;
            break;
        }
        loop = loop->next;
    } while (loop != *eclock_list);
}

void eclock_list_delete(eclock_list_t *eclock_list)
{
    eclock_list_t *item = NULL;

    if (!eclock_list)
        return;
    do {
        item = eclock_list_pop(&eclock_list);
        eclock_delete(item->eclk);
        free(item);
    } while (eclock_list != NULL);
}