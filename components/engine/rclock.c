/*
** EPITECH PROJECT, 2018
** rclock.c
** File description:
** No description
*/

#include <SFML/System.h>
#include <stdlib.h>
#include "engine/components/rclock.h"

rclock_t *rclock_create(void)
{
    rclock_t *rclock = malloc(sizeof(rclock_t));

    if (rclock) {
        rclock->clk = sfClock_create();
        rclock->secs = 0;
        rclock->rst = sfFalse;
    }
    return (rclock);
}

int rclock_time(rclock_t *rclock, float seconds)
{
    if (rclock) {
        if (rclock->secs >= seconds) {
            rclock->secs -= seconds;
            rclock->rst = sfTrue;
            return (1);
        }
    }
    return (0);
}

void rclock_restart(rclock_t *rclock)
{
    if (rclock) {
        rclock->secs = 0;
        rclock->rst = sfFalse;
        sfClock_restart(rclock->clk);
    }
}

void rclock_update(rclock_t *rclock)
{
    sfTime time;

    if (rclock) {
        if (rclock->rst) {
            rclock->rst = sfFalse;
            sfClock_restart(rclock->clk);
        }
        time = sfClock_getElapsedTime(rclock->clk);
        rclock->secs = sfTime_asSeconds(time);
    }
}

void rclock_delete(rclock_t *rclock)
{
    if (rclock) {
        sfClock_destroy(rclock->clk);
        free(rclock);
    }
}