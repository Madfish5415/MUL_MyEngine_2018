/*
** EPITECH PROJECT, 2018
** modal.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/modal.h"
#include "engine/components/scene.h"

modal_t *modal_create(scene_t *scn)
{
    modal_t *modal = malloc(sizeof(modal_t));

    if (!modal || !scn)
        return (NULL);
    modal->scn = scn;
    modal->run = sfFalse;
    modal->data = NULL;
    modal->dlt = NULL;
    modal->evt = NULL;
    modal->rdr = NULL;
    modal->upd = NULL;
    return (modal);
}

void modal_delete(modal_t *modal)
{
    if (!modal || !modal->dlt)
        return;
    modal->dlt(modal);
    free(modal);
}