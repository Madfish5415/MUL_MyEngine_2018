/*
** EPITECH PROJECT, 2018
** modal_helpers.c
** File description:
** No description
*/

#include "engine/components/modal.h"

void modal_events(modal_t *self, global_t *global)
{
    if (!self || !global)
        return;
    if (self->run && self->evt)
        self->evt(self, global);
}

void modal_render(modal_t *self, global_t *global)
{
    if (!self || !global)
        return;
    if (self->run && self->rdr)
        self->rdr(self, global);
}

void modal_update(modal_t *self, global_t *global)
{
    if (!self || !global)
        return;
    if (self->run && self->upd)
        self->upd(self, global);
}