/*
** EPITECH PROJECT, 2018
** modal.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_MODAL_H
#define MUL_MYENGINE_2018_COMPONENTS_MODAL_H

/**
* @file
*/

#include <SFML/Graphics/Types.h>
#include <SFML/Window/Event.h>
#include <SFML/Config.h>
#include "global.h"
#include "scene.h"

/**
* @brief Modal component
*/
typedef struct modal_s {
    scene_t *scn;
    sfBool run;
    void *data;
    void (*dlt)(struct modal_s *self);
    void (*evt)(struct modal_s *self, global_t *global);
    void (*rdr)(struct modal_s *self, global_t *global);
    void (*upd)(struct modal_s *self, global_t *global);
} modal_t;

/**
* @brief Create a modal
*
* @param scn
* @return
*/
modal_t *modal_create(scene_t *scn);

/**
* @brief Delete a modal
*
* @param modal
*/
void modal_delete(modal_t *modal);

/**
* @brief Call the events method of a modal
*
* @param self
* @param global
*/
void modal_events(modal_t *self, global_t *global);

/**
* @brief Call the render method of a modal
*
* @param self
* @param global
*/
void modal_render(modal_t *self, global_t *global);

/**
* @brief Call the update method of a modal
*
* @param self
* @param global
*/
void modal_update(modal_t *self, global_t *global);


#endif // MUL_MYENGINE_2018_COMPONENTS_MODAL_H
