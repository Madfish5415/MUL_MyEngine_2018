##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile for MUL_MyEngine_2018
##

NAME			=		my_engine
TEST_NAME		=		tests/unit_tests

NO_COLOR		=		\e[0;0m
GREEN_COLOR		=		\e[0;32m
RED_COLOR		=		\e[0;31m
GREEN_B_COLOR	=		\e[1;32m
RED_B_COLOR		=		\e[1;31m

CC				=		gcc
RM				=		rm -rf

MAIN_SRC		=		main.c

PROJ_SRC		=		window.c											\
						components/engine/animation.c						\
						components/engine/animation_list.c					\
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
						components/engine/trigger.c							\
						components/engine/trigger_list.c					\
						components/engine/value.c							\
						components/engine/value_list.c						\
						events/engine/window/window_close_event.c			\
						helpers/engine/animation_helpers.c					\
						helpers/engine/animation_list_helpers.c				\
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
						helpers/engine/trigger_helpers.c					\
						helpers/engine/trigger_list_helpers.c				\
						managers/engine/buttons_manager.c					\
						managers/engine/events_manager.c					\
						managers/engine/scenes_manager.c					\
						managers/engine/triggers_manager.c					\
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

TEST_COV		=		$(PROJ_SRC:.c=.gcda)	\
						$(PROJ_SRC:.c=.gcno)	\
						$(TEST_SRC:.c=.gcda)	\
						$(TEST_SRC:.c=.gcno)	\

INCLUDE_DIR		=		"include/"
LIB_MY_DIR		=		"lib/my/"

CFLAGS			+=		-I $(INCLUDE_DIR)
CFLAGS			+=		-W -Wall -Wextra

LDLIBS			+=		-lcsfml-audio -lcsfml-graphics -lcsfml-system -lcsfml-window -lm

MAKEFLAGS		+=		--silent

%.o:			%.c
				$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $< \
				&& echo "$< $(GREEN_COLOR)successfully compiled$(NO_COLOR)" \
				|| { echo "$< $(RED_COLOR)couldn't be compiled$(NO_COLOR)"; exit 1; }

all:			$(NAME)

all_clean:		clean tests_clean

all_fclean:		fclean tests_fclean

$(NAME):		$(MAIN_OBJ) $(PROJ_OBJ)
				$(CC) $(MAIN_OBJ) $(PROJ_OBJ) -o $(NAME) $(LDFLAGS) $(LDLIBS) \
				&& echo "$(GREEN_B_COLOR)$(NAME) successfully created$(NO_COLOR)" \
				|| { echo "$(RED_B_COLOR)$(NAME) couldn't be created$(NO_COLOR)"; exit 1; }

clean:
				$(RM) $(MAIN_OBJ) $(PROJ_OBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

sweet:			all clean

debug:			CFLAGS += -g3
debug:			sweet

tests_run:		CFLAGS += -fprofile-arcs -ftest-coverage
tests_run:		LDLIBS += -lgcov -lcriterion
tests_run:		$(PROJ_OBJ) $(TEST_OBJ)
				$(CC) $(PROJ_OBJ) $(TEST_OBJ) -o $(TEST_NAME) $(LDFLAGS) $(LDLIBS) \
				&& echo "$(GREEN_B_COLOR)$(TEST_NAME) successfully created$(NO_COLOR)" \
				|| { echo "$(RED_B_COLOR)$(TEST_NAME) couldn't be created$(NO_COLOR)"; exit 1; }
				$(TEST_NAME) \
				&& echo "$(GREEN_B_COLOR)Unit tests passed successfully$(NO_COLOR)" \
				|| { echo "$(RED_B_COLOR)Unit tests did not pass successfully$(NO_COLOR)"; exit 1; }

tests_clean:	clean
				$(RM) $(TEST_OBJ)
				$(RM) $(TEST_COV)

tests_fclean:	tests_clean
				$(RM) $(TEST_NAME)

tests_re:		tests_fclean tests_run

tests_sweet:	tests_run tests_clean

tests_sh:       sweet
				sh tests/tests.sh $(NAME) \
				&& echo "$(GREEN_B_COLOR)Functional tests passed successfully$(NO_COLOR)" \
				|| { echo "$(RED_B_COLOR)Functional tests did not pass successfully$(NO_COLOR)"; exit 1; }

.PHONY:         all all_clean all_fclean clean fclean re sweet debug tests_run tests_clean tests_fclean tests_re tests_sweet tests_sh