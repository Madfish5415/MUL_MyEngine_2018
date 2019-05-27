/*
** EPITECH PROJECT, 2018
** modal_list.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/modal.h"
#include "engine/components/modal_list.h"

static modal_list_t *modal_list_item(modal_t *modal, int id)
{
    modal_list_t *item = malloc(sizeof(modal_list_t));

    if (!item)
        return (NULL);
    item->mdl = modal;
    item->id = id;
    return (item);
}

void modal_list_add(modal_list_t **modal_list, modal_t *modal, int id)
{
    modal_list_t *item = modal_list_item(modal, id);

    if (!item)
        return;
    if (*modal_list) {
        item->prev = (*modal_list)->prev;
        item->next = *modal_list;
        item->prev->next = item;
        item->next->prev = item;
    } else {
        item->prev = item;
        item->next = item;
        *modal_list = item;
    }
}

modal_list_t *modal_list_pop(modal_list_t **modal_list)
{
    modal_list_t *item = *modal_list;

    if (!*(modal_list))
        return (NULL);
    if (*modal_list != (*modal_list)->next) {
        item->prev->next = item->next;
        item->next->prev = item->prev;
        *modal_list = item->next;
    } else
        *modal_list = NULL;
    return (item);
}

void modal_list_remove(modal_list_t **modal_list, int id)
{
    modal_list_t *loop = *modal_list;
    modal_list_t *item = NULL;

    if (!(*modal_list))
        return;
    do {
        if (loop->id == id) {
            item = modal_list_pop(&loop);
            modal_delete(item->mdl);
            free(item);
            *modal_list = (loop) ? loop : NULL;
            break;
        }
        loop = loop->next;
    } while (loop != *modal_list);
}

void modal_list_delete(modal_list_t *modal_list)
{
    modal_list_t *item = NULL;

    if (!modal_list)
        return;
    do {
        item = modal_list_pop(&modal_list);
        modal_delete(item->mdl);
        free(item);
    } while (modal_list != NULL);
}