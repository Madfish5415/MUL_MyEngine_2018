/*
** EPITECH PROJECT, 2018
** data.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_SCENE_DATA_H
#define MUL_MYENGINE_2018_COMPONENTS_SCENE_DATA_H

/**
* @file
*/

#include "button_list.h"
#include "dyn_sprite_list.h"
#include "modal_list.h"
#include "music_list.h"
#include "rclock_list.h"
#include "sound_list.h"
#include "sprite_list.h"
#include "text_list.h"

/**
* @brief Data component
*/
typedef struct data_s {
    button_list_t *btn_list;
    dyn_sprite_list_t *dspt_list;
    modal_list_t *mdl_list;
    music_list_t *msc_list;
    rclock_list_t *rclk_list;
    sound_list_t *snd_list;
    sprite_list_t *spt_list;
    text_list_t *text_list;
} data_t;

/**
* @brief Create a data
*
* @return
*/
data_t *data_create(void);

/**
* @brief Delete a data
*
* @param data
*/
void data_delete(data_t *data);

#endif // MUL_MYENGINE_2018_COMPONENTS_SCENE_DATA_H
