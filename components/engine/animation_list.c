/*
** EPITECH PROJECT, 2019
** animation_list.c
** File description:
** MUL_MyEngine_2018
*/

#include <stdlib.h>
#include "engine/components/animation.h"
#include "engine/components/animation_list.h"

static animation_list_t *animation_list_item(animation_t *animation, int id)
{
    animation_list_t *item = malloc(sizeof(animation_list_t));

    if (!item)
        return (NULL);
    item->anim = animation;
    item->id = id;
    return (item);
}

void animation_list_add(animation_list_t **animation_list,
        animation_t *animation, int id)
{
    animation_list_t *item = animation_list_item(animation, id);

    if (!item)
        return;
    if (*animation_list) {
        item->prev = (*animation_list)->prev;
        item->next = *animation_list;
        item->prev->next = item;
        item->next->prev = item;
    } else {
        item->prev = item;
        item->next = item;
        *animation_list = item;
    }
}

animation_list_t *animation_list_pop(animation_list_t **animation_list)
{
    animation_list_t *item = *animation_list;

    if (!*(animation_list))
        return (NULL);
    if (*animation_list != (*animation_list)->next) {
        item->prev->next = item->next;
        item->next->prev = item->prev;
        *animation_list = item->next;
    } else
        *animation_list = NULL;
    return (item);
}

void animation_list_remove(animation_list_t **animation_list, int id)
{
    animation_list_t *loop = *animation_list;
    animation_list_t *item = NULL;

    if (!(*animation_list))
        return;
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

void animation_list_delete(animation_list_t *animation_list)
{
    animation_list_t *item = NULL;

    if (!animation_list)
        return;
    do {
        item = animation_list_pop(&animation_list);
        animation_delete(item->anim);
        free(item);
    } while (animation_list != NULL);
}