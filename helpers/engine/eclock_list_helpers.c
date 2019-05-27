/*
** EPITECH PROJECT, 2018
** eclock_list_helpers.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/eclock.h"
#include "engine/components/eclock_list.h"

eclock_t *eclock_list_get(eclock_list_t *eclock_list, int id)
{
    eclock_list_t *loop = eclock_list;

    if (!eclock_list)
        return (NULL);
    do {
        if (loop->id == id)
            return (loop->eclk);
        loop = loop->next;
    } while (loop != eclock_list);
    return (NULL);
}

int eclock_list_time(eclock_list_t *eclock_list, float seconds, int id)
{
    eclock_list_t *loop = eclock_list;

    if (!eclock_list)
        return (0);
    do {
        if (loop->id == id)
            return (eclock_time(loop->eclk, seconds));
        loop = loop->next;
    } while (loop != eclock_list);
    return (0);
}

void eclock_list_restart(eclock_list_t *eclock_list, int id)
{
    eclock_list_t *loop = eclock_list;

    if (!eclock_list)
        return;
    do {
        if ((loop->id == id) || (id == 0))
            eclock_restart(loop->eclk);
        loop = loop->next;
    } while (loop != eclock_list);
}

void eclock_list_update(eclock_list_t *eclock_list, int id)
{
    eclock_list_t *loop = eclock_list;

    if (!eclock_list)
        return;
    do {
        if ((loop->id == id) || (id == 0))
            eclock_update(loop->eclk);
        loop = loop->next;
    } while (loop != eclock_list);
}