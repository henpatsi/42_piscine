NAME = ft_display_file

SOURCES = $(addprefix ./srcs/, main.c ft_putchar.c ft_putstr.c)

OBJECTS = $(SOURCES:.c=.o)

INCLUDES = ./includes/ft.h

CFLAGS += -Wall -Wextra -Werror -I ./includes/

all: $(NAME)

$(NAME): $(OBJECTS)
	cc $(OBJECTS) -o $(NAME)

$(OBJECTS) : $(SOURCES) $(INCLUDES)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)
