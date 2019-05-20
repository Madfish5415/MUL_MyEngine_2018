/*
** EPITECH PROJECT, 2019
** triggers_manager.c
** File description:
** MUL_MyEngine_2018
*/

#include <SFML/Graphics.h>
#include "engine/components.h"
#include "engine/managers.h"

void triggers_manager_set_value(int id, global_t *global)
{
    value_t *value = NULL;

    if (!global)
        return;
    value = value_list_get(global->vals, LAST_TRIGGER);
    if (!value) {
        value = value_create(id, 0, sfFalse, NULL);
        value_list_add(&global->vals, value, LAST_TRIGGER);
    } else {
        value->itg = id;
    }
}

int triggers_manager_state(trigger_t *trigger, sfFloatRect rect)
{
    sfFloatRect rect_i;

    if (!trigger)
        return (0);
    if (sfFloatRect_intersects(&trigger->zone, &rect, &rect_i))
        return (1);
    return (0);
}

void triggers_manager(trigger_list_t *trigger_list, sfFloatRect rect,
        scene_t *scene, global_t *global)
{
    trigger_list_t *loop = trigger_list;
    int state = 0;

    if (!trigger_list)
        return;
    do {
        state = triggers_manager_state(loop->tgr, rect);
        if (state && loop->tgr->act) {
            triggers_manager_set_value(loop->id, global);
            loop->tgr->act(scene, global);
        }
        loop = loop->next;
    } while (loop != trigger_list);
}