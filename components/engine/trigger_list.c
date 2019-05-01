/*
** EPITECH PROJECT, 2019
** trigger_list.c
** File description:
** MUL_MyEngine_2018
*/

#include <stdlib.h>
#include "engine/components/trigger.h"
#include "engine/components/trigger_list.h"

void trigger_list_add(trigger_list_t **trigger_list, trigger_t *trigger,
        int id)
{
    trigger_list_t *item = malloc(sizeof(trigger_list_t));
    trigger_list_t *first = NULL;
    trigger_list_t *last = NULL;

    item->trigger = trigger;
    item->id = id;
    if (*trigger_list) {
        first = *trigger_list;
        last = first->prev;
        item->prev = last;
        item->next = first;
        first->prev = item;
        last->next = item;
    } else {
        item->prev = item;
        item->next = item;
        *trigger_list = item;
    }
}

trigger_t *trigger_list_get(trigger_list_t *trigger_list, int id)
{
    trigger_list_t *loop = trigger_list;

    if (trigger_list) {
        do {
            if (loop->id == id)
                return (loop->trigger);
            loop = loop->next;
        } while (loop != trigger_list);
    }
    return (NULL);
}

void trigger_list_remove(trigger_list_t **trigger_list, int id)
{
    trigger_list_t *start = *trigger_list;
    trigger_list_t *loop = *trigger_list;
    trigger_list_t *item = NULL;

    if (*trigger_list) {
        do {
            if (loop->id == id) {
                item = trigger_list_pop(&loop);
                start = (start->id == id) ? loop : start;
                *trigger_list = start;
                trigger_delete(item->trigger);
                free(item);
                break;
            }
            loop = loop->next;
        } while (loop != *trigger_list);
    }
}

trigger_list_t *trigger_list_pop(trigger_list_t **trigger_list)
{
    trigger_list_t *item = *trigger_list;
    trigger_list_t *prev = NULL;
    trigger_list_t *next = NULL;

    if (*trigger_list) {
        if (item != item->next) {
            prev = item->prev;
            next = item->next;
            prev->next = next;
            next->prev = prev;
            *trigger_list = next;
        } else
            *trigger_list = NULL;
        item->prev = NULL;
        item->next = NULL;
    }
    return (item);
}

void trigger_list_delete(trigger_list_t *trigger_list)
{
    trigger_list_t *item = NULL;

    if (trigger_list) {
        do {
            item = trigger_list_pop(&trigger_list);
            trigger_delete(item->trigger);
            free(item);
        } while (trigger_list != NULL);
    }
}