NAME = do-op

SOURCES_DIR = ./srcs/

SOURCES = $(addprefix $(SOURCES_DIR), main.c operations.c)

OBJECTS = $(SOURCES:.c=.o)

INCLUDES_DIR = ./includes/

INCLUDES = $(addprefix $(INCLUDES_DIR), operations.h)

CFLAGS = -Wall -Wextra -Werror -I $(INCLUDES_DIR)

all = $(NAME)

$(NAME): $(OBJECTS)
	cc $(OBJECTS) -o $(NAME)

$(OBJECTS): $(SOURCES) $(INCLUDES)

clean: 
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
