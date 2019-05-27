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
#include "engine/components/eclock_list.h"
#include "engine/components/sound_list.h"
#include "engine/components/sprite_list.h"
#include "engine/components/text_list.h"
#include "engine/components/trigger_list.h"
#include "engine/components/value_list.h"

data_t *data_create(void)
{
    data_t *data = malloc(sizeof(data_t));

    if (!data)
        return (NULL);
    data->anim_list = NULL;
    data->btn_list = NULL;
    data->dspt_list = NULL;
    data->eclk_list = NULL;
    data->mdl_list = NULL;
    data->msc_list = NULL;
    data->snd_list = NULL;
    data->spt_list = NULL;
    data->text_list = NULL;
    data->tgr_list = NULL;
    data->val_list = NULL;
    return (data);
}

void data_delete(data_t *data)
{
    if (!data)
        return;
    animation_list_delete(data->anim_list);
    button_list_delete(data->btn_list);
    dyn_sprite_list_delete(data->dspt_list);
    eclock_list_delete(data->eclk_list);
    modal_list_delete(data->mdl_list);
    music_list_delete(data->msc_list);
    sound_list_delete(data->snd_list);
    sprite_list_delete(data->spt_list);
    text_list_delete(data->text_list);
    trigger_list_delete(data->tgr_list);
    value_list_delete(data->val_list);
    free(data);
}