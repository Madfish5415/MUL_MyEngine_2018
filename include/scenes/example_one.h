/*
** EPITECH PROJECT, 2019
** example_one.h
** File description:
** MUL_MyEngine_2018
*/

#ifndef MUL_MYPROJECT_2018_SCENES_EXAMPLE_ONE_H
#define MUL_MYPROJECT_2018_SCENES_EXAMPLE_ONE_H

// Example one functions
scene_t *example_one_scene_init(global_t *global);
data_t *example_one_data_create(scene_t *scene, global_t *global);

// Example one action functions
void animation_create_action(scene_t *scene, global_t *global);

// Example one modal functions
modal_t *modal_one_init(scene_t *scene, global_t *global);
data_t *modal_one_data_create(global_t *global);

#endif // MUL_MYPROJECT_2018_SCENES_EXAMPLE_ONE_H
