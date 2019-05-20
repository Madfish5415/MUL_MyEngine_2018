/*
** EPITECH PROJECT, 2018
** rclock_list_helpers.c
** File description:
** No description
*/

#include "engine/components/rclock.h"
#include "engine/components/rclock_list.h"

int rclock_list_time(rclock_list_t *rclock_list, float seconds, int id)
{
    rclock_list_t *loop = rclock_list;

    if (!rclock_list)
        return (0);
    do {
        if (loop->id == id)
            return (rclock_time(loop->rclk, seconds));
        loop = loop->next;
    } while (loop != rclock_list);
    return (0);
}

void rclock_list_restart(rclock_list_t *rclock_list, int id)
{
    rclock_list_t *loop = rclock_list;

    if (!rclock_list)
        return;
    do {
        if ((loop->id == id) || (id == 0))
            rclock_restart(loop->rclk);
        loop = loop->next;
    } while (loop != rclock_list);
}

void rclock_list_update(rclock_list_t *rclock_list, int id)
{
    rclock_list_t *loop = rclock_list;

    if (!rclock_list)
        return;
    do {
        if ((loop->id == id) || (id == 0))
            rclock_update(loop->rclk);
        loop = loop->next;
    } while (loop != rclock_list);
}