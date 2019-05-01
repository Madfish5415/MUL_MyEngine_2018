/*
** EPITECH PROJECT, 2019
** all_actions.c
** File description:
** MUL_MyEngine_2018
*/

#include "engine/components.h"
#include "resources.h"
#include "scenes.h"

void animation_create_action(scene_t *scene, global_t *global)
{
    data_t *data = (data_t *) scene->data;
    sfIntRect rect = {0, 0, 200, 200};
    dyn_sprite_t *dyn_sprite = dyn_sprite_create(ENGINE_DYN_SPRITE, rect);
    sfVector2f road_one[] = {
            {global->rect.width - 200, 220}, {global->rect.width - 200, 420},
            {global->rect.width - 640, 220}, {global->rect.width - 200, 220}
    };
    animation_t *animation = animation_create(dyn_sprite, 5);

    (void) global;
    sprite_set_pos(dyn_sprite->spt, road_one[0]);
    dyn_sprite_set_road(dyn_sprite, road_one, 4);
    animation_list_add(&data->anim_list, animation, 0);
}