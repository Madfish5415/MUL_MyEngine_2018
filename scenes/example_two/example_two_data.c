/*
** EPITECH PROJECT, 2018
** example_two_data.c
** File description:
** No description
*/

#include "engine/components.h"
#include "engine/utils.h"
#include "scenes/example_two.h"
#include "resources.h"

void example_two_data_objects(data_t *data, global_t *global)
{
    text_t *text = text_create("MyEngine", 100, FONT_ROBOTO);
    sfVector2f center = pos_of_f(global->rect, POS_CENTER, POS_CENTER);

    text_set_pos(text, center);
    text_list_add(&data->text_list, text, 0);
}

data_t *example_two_data_create(scene_t *scene, global_t *global)
{
    data_t *data = data_create();

    (void) scene;
    if (data) {
        example_two_data_objects(data, global);
    }
    return (data);
}