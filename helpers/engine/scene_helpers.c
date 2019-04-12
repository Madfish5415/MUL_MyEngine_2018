/*
** EPITECH PROJECT, 2018
** scene_helpers.c
** File description:
** No description
*/

#include "engine/components/global.h"
#include "engine/components/scene.h"

void scene_events(scene_t *self, global_t *global)
{
    if (self)
        if (self->evt)
            self->evt(self, global);
}

void scene_render(scene_t *self, global_t *global)
{
    if (self)
        if (self->rdr)
            self->rdr(self, global);
}

void scene_update(scene_t *self, global_t *global)
{
    if (self)
        if (self->upd)
            self->upd(self, global);
}