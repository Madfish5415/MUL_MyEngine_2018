/*
** EPITECH PROJECT, 2019
** value_list_helpers.c
** File description:
** MUL_MyEngine_2018
*/

#include <stdlib.h>
#include "engine/components/value.h"
#include "engine/components/value_list.h"

value_t *value_list_get(value_list_t *value_list, int id)
{
    value_list_t *loop = value_list;

    if (!value_list)
        return (NULL);
    do {
        if (loop->id == id)
            return (loop->val);
        loop = loop->next;
    } while (loop != value_list);
    return (NULL);
}