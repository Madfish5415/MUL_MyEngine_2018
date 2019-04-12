/*
** EPITECH PROJECT, 2018
** modal_list.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_MODAL_LIST_H
#define MUL_MYENGINE_2018_COMPONENTS_MODAL_LIST_H

/**
 * @file
 */

#include <SFML/Graphics/Types.h>
#include <SFML/Window/Event.h>
#include <SFML/Config.h>
#include "global.h"
#include "modal.h"

/**
 * @brief Modal list component
 */
typedef struct modal_list_s {
    modal_t *mdl;
    int id;
    struct modal_list_s *prev;
    struct modal_list_s *next;
} modal_list_t;

/**
 * @brief Add a modal to a modal list
 *
 * @param modal_list
 * @param modal
 * @param id
 */
void modal_list_add(modal_list_t **modal_list, modal_t *modal, int id);

/**
 * @brief Get a modal from a modal list
 *
 * @param modal_list
 * @param id
 * @return
 */
modal_t *modal_list_get(modal_list_t *modal_list, int id);

/**
 * @brief Remove a modal from a modal list
 *
 * @param modal_list
 * @param id
 */
void modal_list_remove(modal_list_t **modal_list, int id);

/**
 * @brief Remove and return the current modal list item from a modal list
 *
 * @param modal_list
 * @return
 */
modal_list_t *modal_list_pop(modal_list_t **modal_list);

/**
 * @brief Delete a modal list
 *
 * @param modal_list
 */
void modal_list_delete(modal_list_t *modal_list);

/**
 * @brief Call the events method of the modals related to the specified id in
 * a modal list
 *
 * @param modal_list
 * @param global
 * @param id
 */
void modal_list_events(modal_list_t *modal_list, global_t *global, int id);

/**
 * @brief Call the render method of the modals related to the specified id in
 * a modal list
 *
 * @param modal_list
 * @param global
 * @param id
 */
void modal_list_render(modal_list_t *modal_list, global_t *global, int id);

/**
 * @brief Define the run status of the modal related to the specified id
 *
 * @param modal_list
 * @param run
 * @param id
 */
void modal_list_run(modal_list_t *modal_list, sfBool run, int id);

/**
 * @brief Call the update method of the modals related to the specified id in
 * a modal list
 *
 * @param modal_list
 * @param global
 * @param id
 */
void modal_list_update(modal_list_t *modal_list, global_t *global, int id);

#endif // MUL_MYENGINE_2018_COMPONENTS_MODAL_LIST_H
