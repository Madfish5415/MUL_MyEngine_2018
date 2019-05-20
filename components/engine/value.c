/*
** EPITECH PROJECT, 2018
** value.c
** File description:
** No description
*/

#include <SFML/Config.h>
#include <stdlib.h>
#include "engine/components/value.h"

value_t *value_create(int itg, float flt, sfBool bool, void *all)
{
    value_t *value = malloc(sizeof(value_t));

    if (!value)
        return (NULL);
    value->itg = itg;
    value->flt = flt;
    value->bool = bool;
    value->all = all;
    return (value);
}

void value_delete(value_t *value)
{
    if (!value)
        return;
    free(value);
}