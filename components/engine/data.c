/*
** EPITECH PROJECT, 2018
** data.c
** File description:
** No description
*/

#include <stdlib.h>
#include "engine/components/button_list.h"
#include "engine/components/data.h"
#include "engine/components/dyn_sprite_list.h"
#include "engine/components/modal_list.h"
#include "engine/components/music_list.h"
#include "engine/components/rclock_list.h"
#include "engine/components/sound_list.h"
#include "engine/components/sprite_list.h"
#include "engine/components/text_list.h"

data_t *data_create(void)
{
    data_t *data = malloc(sizeof(data_t));

    if (data) {
        data->btn_list = NULL;
        data->dspt_list = NULL;
        data->mdl_list = NULL;
        data->msc_list = NULL;
        data->rclk_list = NULL;
        data->snd_list = NULL;
        data->spt_list = NULL;
        data->text_list = NULL;
    }
    return (data);
}

void data_delete(data_t *data)
{
    if (data) {
        button_list_delete(data->btn_list);
        dyn_sprite_list_delete(data->dspt_list);
        modal_list_delete(data->mdl_list);
        music_list_delete(data->msc_list);
        rclock_list_delete(data->rclk_list);
        sound_list_delete(data->snd_list);
        sprite_list_delete(data->spt_list);
        text_list_delete(data->text_list);
        free(data);
    }
}