/*
** EPITECH PROJECT, 2018
** example_two_data.c
** File description:
** No description
*/

#include "engine/components.h"
#include "engine/externs.h"
#include "engine/utils.h"
#include "scenes.h"
#include "resources.h"

void example_two_data_objects(data_t *data)
{
    text_t *text = text_create("MyEngine", 100, FONT_ROBOTO);
    sfVector2f center = pos_of_f(WINDOW_RECT, POS_CENTER, POS_CENTER);
    text_set_pos(text, center);
    text_list_add(&data->text_list, text, 0);
}

data_t *example_two_data_create(void)
{
    data_t *data = data_create();

    if (data) {
        example_two_data_objects(data);
    }
    return (data);
}