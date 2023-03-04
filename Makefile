LIB = ar rcs
RM = rm -f

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a
MY_SOURCES = ft_printf.c \
				ft_putchar.c \
				ft_putnbr_base.c \
				ft_putnbr_fd.c \
				ft_putstr.c \
				ft_strchr.c \
				ft_strlen.c \
				ft_nbrlen_base.c \
				ft_puthex.c


MY_OBJECTS = $(MY_SOURCES:.c=.o)
INCLUDE = ft_printf.h

all: $(NAME)

$(NAME): $(MY_OBJECTS) $(INCLUDE)
	$(LIB) $(NAME) $(MY_OBJECTS) $(INCLUDE)

compile:
	$(CC) $(FLAGS) main.c -L. -lftprintf

test: re compile

clean:
	$(RM) $(MY_OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
