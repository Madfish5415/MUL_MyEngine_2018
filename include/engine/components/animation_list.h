/*
** EPITECH PROJECT, 2019
** animation_list.h
** File description:
** MUL_MyEngine_2018
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_ANIMATION_LIST_H
#define MUL_MYENGINE_2018_COMPONENTS_ANIMATION_LIST_H

/**
* @file
*/

#include "animation.h"

/**
* @brief Animation list component
*/
typedef struct animation_list_s {
    animation_t *anim;
    int id;
    struct animation_list_s *prev;
    struct animation_list_s *next;
} animation_list_t;

/**
* @brief Add an animation to an animation list
*
* @param animation_list
* @param animation
* @param id
*/
void animation_list_add(animation_list_t **animation_list,
        animation_t *animation, int id);

/**
* @brief Get an animation from an animation list
*
* @param animation_list
* @param id
* @return
*/
animation_t *animation_list_get(animation_list_t *animation_list, int id);

/**
* @brief Remove an animation from an animation list
*
* @param animation_list
* @param id
*/
void animation_list_remove(animation_list_t **animation_list, int id);

/**
* @brief Remove and return the current animation list item from an animation
* list
*
* @param animation_list
* @return
*/
animation_list_t *animation_list_pop(animation_list_t **animation_list);

/**
* @brief Delete an animation list
*
* @param animation_list
*/
void animation_list_delete(animation_list_t *animation_list);

void animation_list_animate(animation_list_t *animation_list, int id);

void animation_list_display(animation_list_t *animation_list, global_t *global,
        int id);

void animation_list_move(animation_list_t *animation_list, sfBool reset,
        int id);

void animation_list_update(animation_list_t **animation_list, rclock_t *elapse,
        int id);

#endif // MUL_MYENGINE_2018_COMPONENTS_ANIMATION_LIST_H
