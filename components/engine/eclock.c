/*
** EPITECH PROJECT, 2018
** eclock.c
** File description:
** No description
*/

#include <SFML/System.h>
#include <stdlib.h>
#include "engine/components/eclock.h"

eclock_t *eclock_create(void)
{
    eclock_t *eclock = malloc(sizeof(eclock_t));

    if (!eclock)
        return (NULL);
    eclock->clk = sfClock_create();
    if (!eclock->clk)
        return (NULL);
    eclock->secs = 0;
    eclock->rst = sfFalse;
    return (eclock);
}

int eclock_time(eclock_t *eclock, float seconds)
{
    if (!eclock)
        return (0);
    if (eclock->secs >= seconds) {
        eclock->secs -= seconds;
        eclock->rst = sfTrue;
        return (1);
    }
    return (0);
}

void eclock_restart(eclock_t *eclock)
{
    if (!eclock)
        return;
    eclock->secs = 0;
    eclock->rst = sfFalse;
    sfClock_restart(eclock->clk);
}

void eclock_update(eclock_t *eclock)
{
    sfTime time;

    if (!eclock)
        return;
    if (eclock->rst) {
        eclock->rst = sfFalse;
        sfClock_restart(eclock->clk);
    }
    time = sfClock_getElapsedTime(eclock->clk);
    eclock->secs = sfTime_asSeconds(time);
}

void eclock_delete(eclock_t *eclock)
{
    if (!eclock)
        return;
    sfClock_destroy(eclock->clk);
    free(eclock);
}