/*
** EPITECH PROJECT, 2018
** scenes_manager.c
** File description:
** No description
*/

#include "engine/components/global.h"
#include "engine/components/scene.h"
#include "engine/managers.h"
#include "engine/structs.h"

void scenes_manager(const _scene_t *_scene_list, scene_t **p_scene,
        global_t *global)
{
    scene_t *scene = *p_scene;

    if (!scene || (scene->id == scene->nid))
        return;
    for (int i = 0; _scene_list[i].init != 0; ++i) {
        if (scene->nid == _scene_list[i].id) {
            scene_delete(scene);
            *p_scene = _scene_list[i].init(global);
            return;
        }
    }
}