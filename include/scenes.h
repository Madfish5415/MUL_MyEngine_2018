/*
** EPITECH PROJECT, 2018
** scenes.h
** File description:
** No description
*/

#ifndef MUL_MYPROJECT_2018_SCENES_H
#define MUL_MYPROJECT_2018_SCENES_H

#include "engine/components.h"
#include "engine/structs.h"
#include "scenes/example_one.h"
#include "scenes/example_two.h"

// Scene identifiers
enum SCENE_ID {
    EXAMPLE_ONE = 1,
    EXAMPLE_TWO
};

// Scene list
static const _scene_t _SCENE_LIST[] = {
        {EXAMPLE_ONE, example_one_scene_init},
        {EXAMPLE_TWO, example_two_scene_init},
        {0, 0}
};

#endif // MUL_MYPROJECT_2018_SCENES_H
