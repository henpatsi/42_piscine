NAME = bsq

SOURCES = $(addprefix ./srcs/, main.c map_setup.c check_map.c map_tests.c info_setup.c grid_setup.c loop_squares.c make_squares.c fill_square.c ft.c)

OBJECTS = $(SOURCES:.c=.o)

INCLUDES_DIR = ./includes/

INCLUDES = $(addprefix $(INCLUDES_DIR), map_setup.h check_map.h map_tests.h info_setup.h grid_setup.h loop_squares.h make_squares.h fill_square.h ft.h info.h)

CFLAGS += -Wall -Wextra -Werror -I $(INCLUDES_DIR)

all: $(NAME)

$(NAME): $(OBJECTS)
	cc $(OBJECTS) -o $(NAME)

$(OBJECTS): $(SOURCES) $(INCLUDES)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
