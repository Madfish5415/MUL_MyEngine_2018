/*
** EPITECH PROJECT, 2019
** events.h
** File description:
** MUL_MyEngine_2018
*/

#ifndef MUL_MYPROJECT_2018_EVENTS_H
#define MUL_MYPROJECT_2018_EVENTS_H

#include "engine/components.h"
#include "engine/structs.h"

// Window events
void window_close(global_t *global);

// Event list
static const _event_t _EVENT_LIST[] = {
        {sfEvtClosed, window_close},
        {0, 0}
};

#endif // MUL_MYPROJECT_2018_EVENTS_H
