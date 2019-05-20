/*
** EPITECH PROJECT, 2018
** window_utils.c
** File description:
** No description
*/

#include <SFML/Graphics.h>
#include "engine/components/sprite.h"
#include "engine/utils/window.h"
#include "engine/externs.h"

sfVector2f window_get_mouse_pos(global_t *global)
{
    sfVector2u size = sfRenderWindow_getSize(global->win);
    sfVector2i original = sfMouse_getPositionRenderWindow(global->win);
    sfVector2f factor = {global->rect.width / size.x,
                        global->rect.height / size.y};
    sfVector2f real = {original.x * factor.x, original.y * factor.y};

    return (real);
}

sfBool window_is_visible(global_t *global, sprite_t *sprite)
{
    sfBool bool = sfFalse;
    sfFloatRect rect_s;
    sfFloatRect rect_i;

    if (!sprite || !global)
        return (sfFalse);
    rect_s = sfSprite_getGlobalBounds(sprite->obj);
    if (sfFloatRect_intersects(&rect_s, &global->rect, &rect_i))
        bool = sfTrue;
    return (bool);
}