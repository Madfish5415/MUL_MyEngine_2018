/*
** EPITECH PROJECT, 2019
** all_actions.c
** File description:
** MUL_MyEngine_2018
*/

#include <stdlib.h>
#include "engine/components.h"
#include "engine/utils.h"
#include "resources.h"
#include "scenes.h"

void animation_create_action(scene_t *scene, global_t *global)
{
    data_t *data = (data_t *) scene->data;
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