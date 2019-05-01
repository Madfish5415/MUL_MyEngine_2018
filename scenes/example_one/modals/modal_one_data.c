/*
** EPITECH PROJECT, 2018
** modal_one_data.c
** File description:
** No description
*/

#include <SFML/Graphics.h>
#include "engine/components.h"
#include "scenes.h"
#include "resources.h"

void modal_one_data_objects(data_t *data, global_t *global)
{
    sprite_t *sprite = sprite_create(ENGINE_MODAL);

    (void) global;
    sprite_list_add(&data->spt_list, sprite, 0);
}

data_t *modal_one_data_create(global_t *global)
{
    data_t *data = data_create();

    if (data) {
        modal_one_data_objects(data, global);
    }
    return (data);
}