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

    if (trigger_list) {
        do {
            if ((loop->id == id) || (id == 0))
                dyn_sprite_animate(loop->trigger->dspt);
            loop = loop->next;
        } while (loop != trigger_list);
    }
}

void trigger_list_display(trigger_list_t *trigger_list, global_t *global,
        int id)
{
    trigger_list_t *loop = trigger_list;

    if (trigger_list) {
        do {
            if ((loop->id == id) || (id == 0))
                trigger_display(loop->trigger, global);
            loop = loop->next;
        } while (loop != trigger_list);
    }
}

int trigger_list_on_it(trigger_list_t *trigger_list, sfFloatRect rect, int id)
{
    trigger_list_t *loop = trigger_list;

    if (trigger_list) {
        do {
            if (loop->id == id)
                return (trigger_on_it(loop->trigger, rect));
            loop = loop->next;
        } while (loop != trigger_list);
    }
    return (0);
}