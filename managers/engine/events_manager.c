/*
** EPITECH PROJECT, 2018
** events_manager.c
** File description:
** No description
*/

#include "engine/components/global.h"
#include "engine/managers.h"
#include "engine/structs.h"

void events_manager(const _event_t *_event_list, global_t *global)
{
    if (!_event_list || !global)
        return;
    for (int i = 0; _event_list[i].act != 0; ++i)
        if (global->evt.type == _event_list[i].type)
            _event_list[i].act(global);
}