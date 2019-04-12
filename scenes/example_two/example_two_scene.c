/*
** EPITECH PROJECT, 2018
** example_two_scene.c
** File description:
** No description
*/

#include <SFML/Graphics.h>
#include "engine/components.h"
#include "scenes.h"

void example_two_scene_events(scene_t *self, global_t *global)
{
    if (global->evt.type == sfEvtKeyPressed)
        self->nid = EXAMPLE_ONE;
}

void example_two_scene_render(scene_t *self, global_t *global)
{
    data_t *data = (data_t *) self->data;

    if (data)
        text_list_display(data->text_list, global, 0);
}

void example_two_scene_update(scene_t *self, global_t *global)
{
    (void) self;
    (void) global;
}

void example_two_scene_delete(scene_t *self)
{
    if (self->data)
        data_delete(self->data);
}

scene_t *example_two_scene_init(global_t *global)
{
    scene_t *scene = scene_create(EXAMPLE_TWO);

    (void) global;
    scene->data = example_two_data_create();
    scene->dlt = example_two_scene_delete;
    scene->evt = example_two_scene_events;
    scene->rdr = example_two_scene_render;
    scene->upd = example_two_scene_update;
    return (scene);
}