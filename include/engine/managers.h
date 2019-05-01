/*
** EPITECH PROJECT, 2018
** managers.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_MANAGERS_H
#define MUL_MYENGINE_2018_MANAGERS_H

#include "components.h"
#include "structs.h"

// Buttons managers
void buttons_manager_set_value(int id, global_t *global);
int buttons_manager_state(button_t *button, global_t *global);
void buttons_manager(button_list_t *button_list,
        scene_t *scene, global_t *global);

// Events manager
void events_manager(_event_t *_event_list, global_t *global);

// Scenes manager
void scenes_manager(_scene_t *_scene_list,
        scene_t **p_scene, global_t *global);

// Triggers manager
void triggers_manager_set_value(int id, global_t *global);
void triggers_manager(trigger_list_t *trigger_list, sfFloatRect rect,
        scene_t *scene, global_t *global);

#endif // MUL_MYENGINE_2018_MANAGERS_H
