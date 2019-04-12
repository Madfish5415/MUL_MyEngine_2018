/*
** EPITECH PROJECT, 2019
** warp_list.c
** File description:
** MUL_MyEngine_2018
*/

#include <stdlib.h>
#include "engine/components/warp.h"
#include "engine/components/warp_list.h"

void warp_list_add(warp_list_t **warp_list, warp_t *warp, int id)
{
    warp_list_t *item = malloc(sizeof(warp_list_t));
    warp_list_t *first = NULL;
    warp_list_t *last = NULL;

    item->warp = warp;
    item->id = id;
    if (*warp_list) {
        first = *warp_list;
        last = first->prev;
        item->prev = last;
        item->next = first;
        first->prev = item;
        last->next = item;
    } else {
        item->prev = item;
        item->next = item;
        *warp_list = item;
    }
}

warp_t *warp_list_get(warp_list_t *warp_list, int id)
{
    warp_list_t *loop = warp_list;

    if (warp_list) {
        do {
            if (loop->id == id)
                return (loop->warp);
            loop = loop->next;
        } while (loop != warp_list);
    }
    return (NULL);
}

void warp_list_remove(warp_list_t **warp_list, int id)
{
    warp_list_t *start = *warp_list;
    warp_list_t *loop = *warp_list;
    warp_list_t *item = NULL;

    if (*warp_list) {
        do {
            if (loop->id == id) {
                item = warp_list_pop(&loop);
                start = (start->id == id) ? loop : start;
                *warp_list = start;
                warp_delete(item->warp);
                free(item);
                break;
            }
            loop = loop->next;
        } while (loop != *warp_list);
    }
}

warp_list_t *warp_list_pop(warp_list_t **warp_list)
{
    warp_list_t *item = *warp_list;
    warp_list_t *prev = NULL;
    warp_list_t *next = NULL;

    if (*warp_list) {
        if (item != item->next) {
            prev = item->prev;
            next = item->next;
            prev->next = next;
            next->prev = prev;
            *warp_list = next;
        } else
            *warp_list = NULL;
        item->prev = NULL;
        item->next = NULL;
    }
    return (item);
}

void warp_list_delete(warp_list_t *warp_list)
{
    warp_list_t *item = NULL;

    if (warp_list) {
        do {
            item = warp_list_pop(&warp_list);
            warp_delete(item->warp);
            free(item);
        } while (warp_list != NULL);
    }
}