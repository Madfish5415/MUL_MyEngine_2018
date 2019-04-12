##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile for MUL_MyEngine_2018
##

NAME			=		my_engine

TEST_NAME		=		./tests/unit_tests

CC				=		gcc

RM				=		rm -rf

MAIN_SRC		=		main.c

PROJ_SRC		=		window.c											\
						components/engine/button.c							\
						components/engine/button_list.c						\
						components/engine/data.c							\
						components/engine/dyn_sprite.c						\
						components/engine/dyn_sprite_list.c					\
						components/engine/global.c							\
						components/engine/modal.c							\
						components/engine/modal_list.c						\
						components/engine/music.c							\
						components/engine/music_list.c						\
						components/engine/rclock.c							\
						components/engine/rclock_list.c						\
						components/engine/scene.c							\
						components/engine/sound.c							\
						components/engine/sound_list.c						\
						components/engine/sprite.c							\
						components/engine/sprite_list.c						\
						components/engine/text.c 							\
						components/engine/text_list.c						\
						components/engine/value.c							\
						components/engine/value_list.c						\
						components/engine/warp.c							\
						components/engine/warp_list.c						\
						events/engine/window/window_close_event.c			\
						helpers/engine/button_helpers.c						\
						helpers/engine/button_list_helpers.c				\
						helpers/engine/dyn_sprite_helpers.c					\
						helpers/engine/dyn_sprite_list_helpers.c			\
						helpers/engine/modal_helpers.c						\
						helpers/engine/modal_list_helpers.c					\
						helpers/engine/music_helpers.c						\
						helpers/engine/music_list_helpers.c					\
						helpers/engine/rclock_list_helpers.c				\
						helpers/engine/scene_helpers.c						\
						helpers/engine/sound_helpers.c						\
						helpers/engine/sound_list_helpers.c					\
						helpers/engine/sprite_helpers.c						\
						helpers/engine/sprite_list_helpers.c				\
						helpers/engine/text_helpers.c						\
						helpers/engine/text_list_helpers.c					\
						helpers/engine/warp_helpers.c						\
						helpers/engine/warp_list_helpers.c					\
						managers/engine/buttons_manager.c					\
						managers/engine/events_manager.c					\
						managers/engine/scenes_manager.c					\
						scenes/example_one/example_one_scene.c				\
						scenes/example_one/example_one_data.c				\
						scenes/example_one/modals/modal_one.c				\
						scenes/example_one/modals/modal_one_data.c			\
						scenes/example_two/example_two_scene.c				\
						scenes/example_two/example_two_data.c				\
						utils/engine/position_utils.c						\
						utils/engine/rectangle_utils.c						\
						utils/engine/vector_utils.c							\
						utils/engine/window_utils.c							\

TEST_SRC		=		tests/test_src.c		\

MAIN_OBJ		=		$(MAIN_SRC:.c=.o)

PROJ_OBJ		=		$(PROJ_SRC:.c=.o)

TEST_OBJ		=		$(TEST_SRC:.c=.o)

INCLUDE_DIR		=		"include/"
LIB_DIR			=		"lib/my/"

CFLAGS			+=		-I $(INCLUDE_DIR)
CFLAGS			+=		-W -Wall -Wextra

LDLIBS			+=		-lcsfml-audio -lcsfml-graphics -lcsfml-system -lcsfml-window -lm

all:			$(NAME)

$(NAME):		$(MAIN_OBJ) $(PROJ_OBJ)
				$(CC) $(MAIN_OBJ) $(PROJ_OBJ) -o $(NAME) $(CFLAGS) $(LDFLAGS) $(LDLIBS)

clean:
				$(RM) $(MAIN_OBJ) $(PROJ_OBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

sweet:			all clean

tests_run:		sweet

tests_clean:	clean
				$(RM) $(TEST_OBJ)
				$(RM) *.gcda
				$(RM) *.gcno

tests_fclean:	tests_clean
				$(RM) $(TEST_NAME)

tests_sweet:	tests_run tests_clean

tests_sh:       sweet

.PHONY:         all clean fclean re sweet tests_run tests_clean tests_fclean tests_sh