/*
** EPITECH PROJECT, 2018
** constants.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_CONSTANTS_H
#define MUL_MYENGINE_2018_CONSTANTS_H

#include <SFML/Graphics/Rect.h>
#include "events.h"
#include "structs.h"
#include "scenes.h"

// Code constants
const int CODE_FAILURE = 84;
const int CODE_SUCCESS = 0;

// Event list
_event_t _EVENT_LIST[] = {
        {sfEvtClosed, window_close},
        {0, 0}
};

// Scene list
_scene_t _SCENE_LIST[] = {
        {EXAMPLE_ONE, example_one_scene_init},
        {EXAMPLE_TWO, example_two_scene_init},
        {0, 0}
};

// Window constants
const unsigned int WINDOW_WIDTH = 1920;
const unsigned int WINDOW_HEIGHT = 1080;
const sfFloatRect WINDOW_RECT = {0, 0, 1920, 1080};
const char *WINDOW_TITLE = "MyEngine";

#endif // MUL_MYENGINE_2018_CONSTANTS_H
