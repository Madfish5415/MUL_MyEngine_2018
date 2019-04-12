/*
** EPITECH PROJECT, 2018
** scene.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_SCENE_H
#define MUL_MYENGINE_2018_COMPONENTS_SCENE_H

/**
 * @file
 */

#include <SFML/Graphics/Types.h>
#include <SFML/Window/Event.h>
#include <SFML/Config.h>
#include "global.h"

/**
 * @brief Scene component
 */
typedef struct scene_s {
    int id;
    int nid;
    sfBool run;
    void *data;
    void (*dlt)(struct scene_s *self);
    void (*evt)(struct scene_s *self, global_t *global);
    void (*rdr)(struct scene_s *self, global_t *global);
    void (*upd)(struct scene_s *self, global_t *global);
} scene_t;

/**
 * @brief Create a scene
 *
 * @param id
 * @return
 */
scene_t *scene_create(int id);

/**
 * @brief Delete a scene
 *
 * @param scene
 */
void scene_delete(scene_t *scene);

/**
 * @brief Call the events method of a scene
 *
 * @param self
 * @param global
 */
void scene_events(scene_t *self, global_t *global);

/**
 * @brief Call the render method of a scene
 *
 * @param self
 * @param global
 */
void scene_render(scene_t *self, global_t *global);

/**
 * @brief Call the update method of a scene
 *
 * @param self
 * @param global
 */
void scene_update(scene_t *self, global_t *global);

#endif // MUL_MYENGINE_2018_COMPONENTS_SCENE_H
