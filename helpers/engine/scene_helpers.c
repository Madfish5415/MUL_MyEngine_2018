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
    if (!self || !self->evt || !global)
        return;
    self->evt(self, global);
}

void scene_render(scene_t *self, global_t *global)
{
    if (!self || !self->rdr || !global)
        return;
    self->rdr(self, global);
}

void scene_update(scene_t *self, global_t *global)
{
    if (!self || !self->upd || !global)
        return;
    self->upd(self, global);
}