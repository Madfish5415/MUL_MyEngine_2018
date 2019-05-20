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

void triggers_manager(trigger_list_t *trigger_list, sfFloatRect rect,
        scene_t *scene, global_t *global)
{
    trigger_list_t *loop = trigger_list;
    sfFloatRect rect_i = {0, 0, 0, 0};
    int state = 0;

    if (!trigger_list)
        return;
    do {
        state = sfFloatRect_intersects(&loop->tgr->zone,
                &rect, &rect_i);
        if (state) {
            triggers_manager_set_value(loop->id, global);
            loop->tgr->act(scene, global);
        }
        loop = loop->next;
    } while (loop != trigger_list);
}