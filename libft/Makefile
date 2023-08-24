NAME = test

SOURCES = test_main.c \
ft_count_if.c ft_putnbr.c ft_power.c ft_atoi.c ft_map.c ft_factorial.c \
ft_strncmp.c ft_strncpy.c ft_is_sort.c ft_str_is_printable.c \
ft_strupcase.c ft_isspace.c ft_strlen.c ft_putchar.c \
ft_strstr.c ft_swap.c ft_any.c ft_strcmp.c ft_str_is_numeric.c \
ft_strjoin.c ft_str_is_lowercase.c ft_rev_int_tab.c ft_strcpy.c \
ft_split.c ft_range.c ft_strdup.c ft_strlowcase.c ft_strcat.c \
ft_str_is_uppercase.c ft_str_is_alpha.c ft_sort_int_tab.c \
ft_putstr.c ft_foreach.c ft_strcapitalize.c

OBJECTS = $(SOURCES:.c=.o)

INCLUDES = ft.h

CFLAGS += -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJECTS)
	cc $(OBJECTS) -o $(NAME)

$(OBJECTS): $(SOURCES) $(INCLUDES)

clean:
	rm -f $(OBJECTS)
	
fclean: clean
	rm -f $(NAME)

re: fclean all
