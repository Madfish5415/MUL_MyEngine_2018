/*
** EPITECH PROJECT, 2018
** modal_list.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/modal.h"
#include "engine/components/modal_list.h"

void modal_list_add(modal_list_t **modal_list, modal_t *modal, int id)
{
    modal_list_t *item = malloc(sizeof(modal_list_t));
    modal_list_t *first = NULL;
    modal_list_t *last = NULL;

    item->mdl = modal;
    item->id = id;
    if (*modal_list) {
        first = *modal_list;
        last = first->prev;
        item->prev = last;
        item->next = first;
        first->prev = item;
        last->next = item;
    } else {
        item->prev = item;
        item->next = item;
        *modal_list = item;
    }
}

modal_t *modal_list_get(modal_list_t *modal_list, int id)
{
    modal_list_t *loop = modal_list;

    if (!modal_list)
        return (NULL);
    do {
        if (loop->id == id)
            return (loop->mdl);
        loop = loop->next;
    } while (loop != modal_list);
    return (NULL);
}

void modal_list_remove(modal_list_t **modal_list, int id)
{
    modal_list_t *loop = *modal_list;
    modal_list_t *item = NULL;

    if (!*modal_list)
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

modal_list_t *modal_list_pop(modal_list_t **modal_list)
{
    modal_list_t *item = *modal_list;
    modal_list_t *prev = NULL;
    modal_list_t *next = NULL;

    if (!*modal_list)
        return (NULL);
    if (item != item->next) {
        prev = item->prev;
        next = item->next;
        prev->next = next;
        next->prev = prev;
        *modal_list = next;
    } else
        *modal_list = NULL;
    item->prev = NULL;
    item->next = NULL;
    return (item);
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