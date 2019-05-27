/*
** EPITECH PROJECT, 2018
** button.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_BUTTON_H
#define MUL_MYENGINE_2018_COMPONENTS_BUTTON_H

/**
* @file
*/

#include "dyn_sprite.h"
#include "global.h"
#include "scene.h"
#include "text.h"

#define LAST_BUTTON (200)

/**
* @brief Button state constants
*/
enum BUTTON_STATE {
    BTN_STATE_NORMAL = 1,
    BTN_STATE_HOVERED,
    BTN_STATE_CLICKED
};

/**
* @brief Button component
*/
typedef struct button_s {
    dyn_sprite_t *dspt;
    text_t *txt;
    sfVector2f pos;
    int state;
    void (*act)(scene_t *scene, global_t *global);
} button_t;

/**
* @brief Create a button
*
* @param path
* @param size
* @param value
* @param font
* @return
*/
button_t *button_create(const char *path, sfIntRect size,
        const char *value, const char *font);

/**
* @brief Set the position of a button
*
* @param button
* @param pos
*/
void button_set_pos(button_t *button, sfVector2f pos);

/**
* @brief Set the state of a button
*
* @param button
* @param state
*/
void button_set_state(button_t *button, int state);

/**
* @brief Delete a button
*
* @param button
*/
void button_delete(button_t *button);

/**
* @brief Animate a button
*
* @param button
*/
void button_animate(button_t *button);

/**
* @brief Display a button
*
* @param button
* @param global
*/
void button_display(button_t *button, global_t *global);

#endif // MUL_MYENGINE_2018_COMPONENTS_BUTTON_H
