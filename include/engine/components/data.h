/*
** EPITECH PROJECT, 2018
** data.h
** File description:
** No description
*/

#ifndef MUL_MYENGINE_2018_COMPONENTS_DATA_H
#define MUL_MYENGINE_2018_COMPONENTS_DATA_H

/**
* @file
*/

#include "animation_list.h"
#include "button_list.h"
#include "dyn_sprite_list.h"
#include "eclock_list.h"
#include "modal_list.h"
#include "music_list.h"
#include "sound_list.h"
#include "sprite_list.h"
#include "text_list.h"
#include "trigger_list.h"
#include "value_list.h"

/**
* @brief Data component
*/
typedef struct data_s {
    animation_list_t *anim_list;
    button_list_t *btn_list;
    dyn_sprite_list_t *dspt_list;
    eclock_list_t *eclk_list;
    modal_list_t *mdl_list;
    music_list_t *msc_list;
    sound_list_t *snd_list;
    sprite_list_t *spt_list;
    text_list_t *text_list;
    trigger_list_t *tgr_list;
    value_list_t *val_list;
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

#endif // MUL_MYENGINE_2018_COMPONENTS_DATA_H
