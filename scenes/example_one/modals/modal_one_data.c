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

void modal_one_data_objects(data_t *data)
{
    sprite_t *sprite = sprite_create(ENGINE_MODAL);

    sprite_list_add(&data->spt_list, sprite, 0);
}

data_t *modal_one_data_create(void)
{
    data_t *data = data_create();

    if (data) {
        modal_one_data_objects(data);
    }
    return (data);
}