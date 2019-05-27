/*
** EPITECH PROJECT, 2019
** trigger_list.c
** File description:
** MUL_MyEngine_2018
*/

#include <stdlib.h>
#include "engine/components/trigger.h"
#include "engine/components/trigger_list.h"

static trigger_list_t *trigger_list_item(trigger_t *trigger, int id)
{
    trigger_list_t *item = malloc(sizeof(trigger_list_t));

    if (!item)
        return (NULL);
    item->tgr = trigger;
    item->id = id;
    return (item);
}

void trigger_list_add(trigger_list_t **trigger_list, trigger_t *trigger, int id)
{
    trigger_list_t *item = trigger_list_item(trigger, id);

    if (!item)
        return;
    if (*trigger_list) {
        item->prev = (*trigger_list)->prev;
        item->next = *trigger_list;
        item->prev->next = item;
        item->next->prev = item;
    } else {
        item->prev = item;
        item->next = item;
        *trigger_list = item;
    }
}

trigger_list_t *trigger_list_pop(trigger_list_t **trigger_list)
{
    trigger_list_t *item = *trigger_list;

    if (!*(trigger_list))
        return (NULL);
    if (*trigger_list != (*trigger_list)->next) {
        item->prev->next = item->next;
        item->next->prev = item->prev;
        *trigger_list = item->next;
    } else
        *trigger_list = NULL;
    return (item);
}

void trigger_list_remove(trigger_list_t **trigger_list, int id)
{
    trigger_list_t *loop = *trigger_list;
    trigger_list_t *item = NULL;

    if (!(*trigger_list))
        return;
    do {
        if (loop->id == id) {
            item = trigger_list_pop(&loop);
            trigger_delete(item->tgr);
            free(item);
            *trigger_list = (loop) ? loop : NULL;
            break;
        }
        loop = loop->next;
    } while (loop != *trigger_list);
}

void trigger_list_delete(trigger_list_t *trigger_list)
{
    trigger_list_t *item = NULL;

    if (!trigger_list)
        return;
    do {
        item = trigger_list_pop(&trigger_list);
        trigger_delete(item->tgr);
        free(item);
    } while (trigger_list != NULL);
}