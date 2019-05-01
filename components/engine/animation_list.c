/*
** EPITECH PROJECT, 2019
** animation_list.c
** File description:
** MUL_MyEngine_2018
*/

#include <stdlib.h>
#include "engine/components/animation.h"
#include "engine/components/animation_list.h"

void animation_list_add(animation_list_t **animation_list,
        animation_t *animation, int id)
{
    animation_list_t *item = malloc(sizeof(animation_list_t));
    animation_list_t *first = NULL;
    animation_list_t *last = NULL;

    item->anim = animation;
    item->id = id;
    if (*animation_list) {
        first = *animation_list;
        last = first->prev;
        item->prev = last;
        item->next = first;
        first->prev = item;
        last->next = item;
    } else {
        item->prev = item;
        item->next = item;
        *animation_list = item;
    }
}

animation_t *animation_list_get(animation_list_t *animation_list, int id)
{
    animation_list_t *loop = animation_list;

    if (animation_list) {
        do {
            if (loop->id == id)
                return (loop->anim);
            loop = loop->next;
        } while (loop != animation_list);
    }
    return (NULL);
}

void animation_list_remove(animation_list_t **animation_list, int id)
{
    animation_list_t *loop = *animation_list;
    animation_list_t *item = NULL;

    if (*animation_list) {
        do {
            if (loop->id == id) {
                item = animation_list_pop(&loop);
                animation_delete(item->anim);
                free(item);
                *animation_list = (loop) ? loop : NULL;
                break;
            }
            loop = loop->next;
        } while (loop != *animation_list);
    }
}

animation_list_t *animation_list_pop(animation_list_t **animation_list)
{
    animation_list_t *item = *animation_list;
    animation_list_t *prev = NULL;
    animation_list_t *next = NULL;

    if (*animation_list) {
        if (item != item->next) {
            prev = item->prev;
            next = item->next;
            prev->next = next;
            next->prev = prev;
            *animation_list = next;
        } else
            *animation_list = NULL;
        item->prev = NULL;
        item->next = NULL;
    }
    return (item);
}

void animation_list_delete(animation_list_t *animation_list)
{
    animation_list_t *item = NULL;

    if (animation_list) {
        do {
            item = animation_list_pop(&animation_list);
            animation_delete(item->anim);
            free(item);
        } while (animation_list != NULL);
    }
}