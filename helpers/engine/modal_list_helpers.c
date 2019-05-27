/*
** EPITECH PROJECT, 2018
** modal_list_helpers.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/modal.h"
#include "engine/components/modal_list.h"

void modal_list_events(modal_list_t *modal_list, global_t *global, int id)
{
    modal_list_t *loop = modal_list;

    if (!modal_list)
        return;
    do {
        if ((loop->id == id) || (id == 0))
            modal_events(loop->mdl, global);
        loop = loop->next;
    } while (loop != modal_list);
}

modal_t *modal_list_get(modal_list_t *modal_list, int id)
{
    modal_list_t *loop = modal_list;

    if (!modal_list)
        return (NULL);
    do {
        if (loop->id == id)
            return (loop->mdl);
        loop = loop->next;
    } while (loop != modal_list);
    return (NULL);
}

void modal_list_render(modal_list_t *modal_list, global_t *global, int id)
{
    modal_list_t *loop = modal_list;

    if (!modal_list)
        return;
    do {
        if ((loop->id == id) || (id == 0))
            modal_render(loop->mdl, global);
        loop = loop->next;
    } while (loop != modal_list);
}

void modal_list_run(modal_list_t *modal_list, sfBool run, int id)
{
    modal_list_t *loop = modal_list;

    if (!modal_list)
        return;
    do {
        if ((loop->id == id) || (id == 0))
            loop->mdl->run = run;
        loop = loop->next;
    } while (loop != modal_list);
}

void modal_list_update(modal_list_t *modal_list, global_t *global, int id)
{
    modal_list_t *loop = modal_list;

    if (!modal_list)
        return;
    do {
        if ((loop->id == id) || (id == 0))
            modal_update(loop->mdl, global);
        loop = loop->next;
    } while (loop != modal_list);
}