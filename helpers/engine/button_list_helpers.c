/*
** EPITECH PROJECT, 2018
** button_list_helpers.c
** File description:
** No description
*/

#include "engine/components/button.h"
#include "engine/components/button_list.h"

void button_list_animate(button_list_t *button_list, int id)
{
    button_list_t *loop = button_list;

    if (button_list) {
        do {
            if ((loop->id == id) || (id == 0))
                dyn_sprite_animate(loop->btn->dspt);
            loop = loop->next;
        } while (loop != button_list);
    }
}

void button_list_display(button_list_t *button_list, global_t *global, int id)
{
    button_list_t *loop = button_list;

    if (button_list) {
        do {
            if ((loop->id == id) || (id == 0))
                button_display(loop->btn, global);
            loop = loop->next;
        } while (loop != button_list);
    }
}