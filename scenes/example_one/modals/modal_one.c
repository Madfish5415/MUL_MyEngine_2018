/*
** EPITECH PROJECT, 2018
** modal_one.c
** File description:
** No description
*/

#include <SFML/Graphics.h>
#include "engine/components.h"
#include "engine/managers.h"
#include "scenes.h"

void modal_one_events(modal_t *self, global_t *global)
{
    if (global->evt.type == sfEvtKeyPressed)
        self->run = sfFalse;
}

void modal_one_render(modal_t *self, global_t *global)
{
    data_t *data = (data_t *) self->data;

    if (data) {
        sprite_list_display(data->spt_list, global, 0);
    }
}

void modal_one_delete(modal_t *self)
{
    if (self->data)
        data_delete(self->data);
}

modal_t *modal_one_init(scene_t *scene, global_t *global)
{
    modal_t *modal = modal_create(scene);

    modal->data = modal_one_data_create(global);
    modal->dlt = modal_one_delete;
    modal->evt = modal_one_events;
    modal->rdr = modal_one_render;
    return (modal);
}