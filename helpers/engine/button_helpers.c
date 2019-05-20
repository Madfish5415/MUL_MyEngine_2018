/*
** EPITECH PROJECT, 2018
** button_helpers.c
** File description:
** No description
*/

#include "engine/components/button.h"
#include "engine/components/global.h"
#include "engine/components/sprite.h"
#include "engine/components/text.h"
#include "engine/utils/rectangle.h"

void button_display(button_t *button, global_t *global)
{
    if (!button || !global)
        return;
    sprite_display(button->dspt->spt, global);
    text_display(button->txt, global);
}