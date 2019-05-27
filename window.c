/*
** EPITECH PROJECT, 2018
** engine.c
** File description:
** No description
*/

#include <SFML/Graphics.h>
#include "engine/constants.h"
#include "engine/managers.h"
#include "constants.h"
#include "events.h"
#include "scenes.h"

int window_display(global_t *global, scene_t *scene)
{
    while (sfRenderWindow_pollEvent(global->win, &global->evt)) {
        events_manager(_EVENT_LIST, global);
        scene_events(scene, global);
    }
    sfRenderWindow_clear(global->win, sfBlack);
    scene_render(scene, global);
    sfRenderWindow_display(global->win);
    scene_update(scene, global);
    return (0);
}

int window_launch(void)
{
    sfVideoMode mode = {WINDOW_WIDTH, WINDOW_HEIGHT, 32};
    sfRenderWindow *window = sfRenderWindow_create(mode,
            WINDOW_TITLE, sfDefaultStyle, NULL);
    sfEvent event = {0};
    global_t *global = global_create(window, event);
    scene_t *scene = example_one_scene_init(global);

    if (!window)
        return (EG_FAILURE);
    while (sfRenderWindow_isOpen(window)) {
        scenes_manager(_SCENE_LIST, &scene, global);
        window_display(global, scene);
    }
    scene_delete(scene);
    global_delete(global);
    return (EG_SUCCESS);
}