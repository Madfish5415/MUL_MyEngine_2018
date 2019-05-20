/*
** EPITECH PROJECT, 2019
** animation_list_helpers.c
** File description:
** MUL_MyEngine_2018
*/

#include "engine/components/animation.h"
#include "engine/components/animation_list.h"

void animation_list_animate(animation_list_t *animation_list, int id)
{
    animation_list_t *loop = animation_list;

    if (!animation_list)
        return;
    do {
        if (loop->anim && ((loop->id == id) || (id == 0)))
            dyn_sprite_animate(loop->anim->dspt);
        loop = loop->next;
    } while (loop != animation_list);
}

void animation_list_display(animation_list_t *animation_list, global_t *global,
        int id)
{
    animation_list_t *loop = animation_list;

    if (!animation_list)
        return;
    do {
        if ((loop->id == id) || (id == 0))
            animation_display(loop->anim, global);
        loop = loop->next;
    } while (loop != animation_list);
}

void animation_list_move(animation_list_t *animation_list, sfBool reset,
        int id)
{
    animation_list_t *loop = animation_list;

    if (!animation_list)
        return;
    do {
        if (loop->anim && ((loop->id == id) || (id == 0)))
            dyn_sprite_move(loop->anim->dspt, reset);
        loop = loop->next;
    } while (loop != animation_list);
}

void animation_list_update(animation_list_t **animation_list, rclock_t *elapse,
        int id)
{
    animation_list_t *loop = *animation_list;

    if (!*animation_list)
        return;
    do {
        loop = loop->next;
        if ((loop->prev->id == id) || (id == 0))
            animation_update(loop->prev->anim, elapse);
        if (loop->prev->anim && (loop->prev->anim->secs <= 0))
            animation_list_remove(animation_list, loop->prev->id);
    } while (*animation_list && (loop != *animation_list));
}