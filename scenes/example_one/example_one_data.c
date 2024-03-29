/*
** EPITECH PROJECT, 2018
** example_one_data.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components.h"
#include "engine/utils.h"
#include "scenes/example_one.h"
#include "resources.h"

void example_one_data_buttons(data_t *data, global_t *global)
{
    sfIntRect rect = {0, 0, 200, 100};
    button_t *button_1 = button_create(ENGINE_BUTTON_1, rect, "", FONT_ROBOTO);
    button_t *button_2 = button_create(ENGINE_BUTTON_2, rect, "", FONT_ROBOTO);
    button_t *button_3 = button_create(ENGINE_BUTTON_3, rect, "", FONT_ROBOTO);

    (void) global;
    button_3->act = animation_create_action;
    button_set_pos(button_1, vect_f(220, 100));
    button_set_pos(button_2, vect_f(440, 100));
    button_set_pos(button_3, vect_f(660, 100));
    text_set_value(button_3->txt, "button", 35);
    button_list_add(&data->btn_list, button_1, 1);
    button_list_add(&data->btn_list, button_2, 2);
    button_list_add(&data->btn_list, button_3, 3);
}

void example_one_data_objects_one(data_t *data, global_t *global)
{
    sfIntRect rect = {0, 0, 200, 200};
    dyn_sprite_t *dyn_sprite = dyn_sprite_create(ENGINE_DYN_SPRITE, rect);
    sprite_t *sprite = sprite_create(ENGINE_SPRITE);
    sfVector2f *road = malloc(sizeof(sfVector2f) * 4);

    (void) global;
    road[0] = vect_f(0, 220);
    road[1] = vect_f(0, 420);
    road[2] = vect_f(440, 220);
    road[3] = vect_f(0, 220);
    dyn_sprite_set_road(dyn_sprite, road, 4);
    dyn_sprite_list_add(&data->dspt_list, dyn_sprite, 0);
    sprite_list_add(&data->spt_list, sprite, 0);
}

void example_one_data_objects_two(data_t *data, global_t *global)
{
    sfIntRect rect = {0, 0, 200, 200};
    dyn_sprite_t *dyn_sprite = dyn_sprite_create(ENGINE_DYN_SPRITE, rect);
    sfVector2f *road = malloc(sizeof(sfVector2f) * 4);
    animation_t *animation = animation_create(dyn_sprite, 5);

    (void) global;
    road[0] = vect_f(global->rect.width - 200, 220);
    road[1] = vect_f(global->rect.width - 200, 420);
    road[2] = vect_f(global->rect.width - 640, 220);
    road[3] = vect_f(global->rect.width - 200, 220);
    dyn_sprite_set_road(dyn_sprite, road, 4);
    animation_list_add(&data->anim_list, animation, 0);
}

void example_one_data_modals(data_t *data, scene_t *scene, global_t *global)
{
    modal_t *modal = modal_one_init(scene, global);

    modal_list_add(&data->mdl_list, modal, 0);
}

data_t *example_one_data_create(scene_t *scene, global_t *global)
{
    data_t *data = data_create();

    if (data) {
        example_one_data_buttons(data, global);
        example_one_data_objects_one(data, global);
        example_one_data_objects_two(data, global);
        example_one_data_modals(data, scene, global);
        data->eclk_list = eclock_list_create(3);
    }
    return (data);
}