/*
** EPITECH PROJECT, 2018
** structs.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_STRUCTS_H
#define MUL_MYENGINE_2018_STRUCTS_H

/**
* @file
*/

#include <SFML/Window/Event.h>
#include "engine/components/global.h"
#include "engine/components/scene.h"

/**
* @brief Event public
*/
typedef struct _event_s {
    sfEventType type;
    void (*act)(global_t *global);
} _event_t;

/**
* @brief Scene public
*/
typedef struct _scene_s {
    int id;
    scene_t *(*init)(global_t *global);
} _scene_t;

#endif // MUL_MYENGINE_2018_STRUCTS_H
