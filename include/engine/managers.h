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

enum MANAGER_ID {
    LAST_BUTTON = 200
};

// Buttons managers
void button_manager_set_value(int id, global_t *global);
int button_manager_state(button_t *button, global_t *global);
void buttons_manager(button_list_t *button_list,
        scene_t *scene, global_t *global);

// Event manager
void events_manager(_event_t *_event_list, global_t *global);

// Scenes manager
void scenes_manager(_scene_t *_scene_list,
        scene_t **p_scene, global_t *global);

#endif // MUL_MYENGINE_2018_MANAGERS_H
