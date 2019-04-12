/*
** EPITECH PROJECT, 2018
** scene.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/scene.h"

scene_t *scene_create(int id)
{
    scene_t *scene = malloc(sizeof(scene_t));

    if (scene) {
        scene->id = id;
        scene->nid = id;
        scene->run = sfTrue;
        scene->data = NULL;
        scene->dlt = NULL;
        scene->evt = NULL;
        scene->rdr = NULL;
        scene->upd = NULL;
    }
    return (scene);
}

void scene_delete(scene_t *scene)
{
    if (scene) {
        if (scene->dlt)
            scene->dlt(scene);
        free(scene);
    }
}