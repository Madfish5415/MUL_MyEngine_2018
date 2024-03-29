/*
** EPITECH PROJECT, 2018
** buttons_manager.c
** File description:
** No description
*/

#include <SFML/Graphics.h>
#include "engine/utils/window.h"
#include "engine/components.h"
#include "engine/managers.h"

void buttons_manager_set_value(int id, global_t *global)
{
    value_t *value = NULL;

    if (!global)
        return;
    value = value_list_get(global->vals, LAST_BUTTON);
    if (!value) {
        value = value_create(id, 0, sfFalse, NULL);
        value_list_add(&global->vals, value, LAST_BUTTON);
    } else {
        value->itg = id;
    }
}

int buttons_manager_state(button_t *button, global_t *global)
{
    sfVector2f mouse;
    sfFloatRect rect;

    if (!button || !global)
        return (0);
    mouse = window_get_mouse_pos(global);
    rect = sfSprite_getGlobalBounds(button->dspt->spt->obj);
    if (sfFloatRect_contains(&rect, mouse.x, mouse.y)) {
        if (global->evt.type == sfEvtMouseButtonPressed)
            return (BTN_STATE_CLICKED);
        if (global->evt.type == sfEvtMouseButtonReleased)
            return (BTN_STATE_HOVERED);
        if (button->state != BTN_STATE_CLICKED)
            return (BTN_STATE_HOVERED);
        else
            return (button->state);
    } else
        return (BTN_STATE_NORMAL);
}

void buttons_manager(button_list_t *button_list, scene_t *scene,
        global_t *global)
{
    button_list_t *loop = button_list;
    int state = 0;
    int update = 0;

    if (!button_list)
        return;
    do {
        state = buttons_manager_state(loop->btn, global);
        update = (state && (state == BTN_STATE_HOVERED)) ? 1 : 0;
        update = (update && (loop->btn->state == BTN_STATE_CLICKED)) ? 1 : 0;
        if (update && loop->btn->act) {
            buttons_manager_set_value(loop->id, global);
            loop->btn->act(scene, global);
        }
        button_set_state(loop->btn, state);
        loop = loop->next;
    } while (loop != button_list);
}