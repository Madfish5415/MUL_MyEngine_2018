/*
** EPITECH PROJECT, 2018
** scenes.h
** File description:
** No description
*/

#ifndef MUL_MYPROJECT_2018_SCENES_H
#define MUL_MYPROJECT_2018_SCENES_H

#include "engine/components.h"

enum SCENE_ID {
    EXAMPLE_ONE = 1,
    EXAMPLE_TWO
};

// Example one functions
scene_t *example_one_scene_init(global_t *global);
data_t *example_one_data_create(scene_t *scene);

// Example one modal functions
modal_t *modal_one_init(scene_t *scene);
data_t *modal_one_data_create(void);

// Example two functions
scene_t *example_two_scene_init(global_t *global);
data_t *example_two_data_create(void);

#endif // MUL_MYPROJECT_2018_SCENES_H
