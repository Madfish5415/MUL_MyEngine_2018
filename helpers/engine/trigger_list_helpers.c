/*
** EPITECH PROJECT, 2019
** trigger_list_helpers.c
** File description:
** MUL_MyEngine_2018
*/

#include "engine/components/trigger.h"
#include "engine/components/trigger_list.h"

void trigger_list_animate(trigger_list_t *trigger_list, int id)
{
    trigger_list_t *loop = trigger_list;

    if (!trigger_list)
        return;
    do {
        if ((loop->id == id) || (id == 0))
            dyn_sprite_animate(loop->tgr->dspt);
        loop = loop->next;
    } while (loop != trigger_list);
}

void trigger_list_display(trigger_list_t *trigger_list, global_t *global,
        int id)
{
    trigger_list_t *loop = trigger_list;

    if (!trigger_list)
        return;
    do {
        if ((loop->id == id) || (id == 0))
            trigger_display(loop->tgr, global);
        loop = loop->next;
    } while (loop != trigger_list);
}

trigger_t *trigger_list_get(trigger_list_t *trigger_list, int id)
{
    trigger_list_t *loop = trigger_list;

    if (!trigger_list)
        return (NULL);
    do {
        if (loop->id == id)
            return (loop->tgr);
        loop = loop->next;
    } while (loop != trigger_list);
    return (NULL);
}