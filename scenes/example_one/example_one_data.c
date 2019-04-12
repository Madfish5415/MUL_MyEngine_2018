/*
** EPITECH PROJECT, 2018
** example_one_data.c
** File description:
** No description
*/

#include "engine/components.h"
#include "engine/externs.h"
#include "engine/utils.h"
#include "scenes.h"
#include "resources.h"

void example_one_data_buttons(data_t *data)
{
    button_t *button_1 = button_create(ENGINE_BUTTON_1,
            rect_i(0, 0, 200, 100), "", FONT_ROBOTO);
    button_t *button_2 = button_create(ENGINE_BUTTON_2,
            rect_i(0, 0, 200, 100), "", FONT_ROBOTO);
    button_t *button_3 = button_create(ENGINE_BUTTON_3,
            rect_i(0, 0, 200, 100), "", FONT_ROBOTO);

    button_set_pos(button_1, vect_f(220, 100));
    button_set_pos(button_2, vect_f(440, 100));
    button_set_pos(button_3, vect_f(660, 100));
    text_set_value(button_3->txt, "button", 35);
    button_list_add(&data->btn_list, button_1, 1);
    button_list_add(&data->btn_list, button_2, 2);
    button_list_add(&data->btn_list, button_3, 3);
}

void example_one_data_objects(data_t *data)
{
    dyn_sprite_t *dyn_sprite = dyn_sprite_create(ENGINE_DYN_SPRITE,
            rect_i(0, 0, 200, 200));
    sprite_t *sprite = sprite_create(ENGINE_SPRITE);
    sfVector2f road_one[] = {{0, 220}, {0, 420}, {440, 220}, {0, 220}};

    sprite_set_pos(dyn_sprite->spt, road_one[0]);
    dyn_sprite_set_road(dyn_sprite, road_one, 4);
    dyn_sprite_list_add(&data->dspt_list, dyn_sprite, 0);
    sprite_list_add(&data->spt_list, sprite, 0);
}

void example_one_data_modals(data_t *data, scene_t *scene)
{
    modal_t *modal = modal_one_init(scene);

    modal_list_add(&data->mdl_list, modal, 0);
}

data_t *example_one_data_create(scene_t *scene)
{
    data_t *data = data_create();

    if (data) {
        example_one_data_buttons(data);
        example_one_data_objects(data);
        example_one_data_modals(data, scene);
        data->rclk_list = rclock_list_create(2);
    }
    return (data);
}