LIB = ar rcs
RM = rm -f

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a
MY_SOURCES = ft_printf.c \
				ft_putchar_fd.c \
				ft_putnbr_base.c \
				ft_putstr_fd.c \
				ft_strchr.c \
				ft_strlen.c \
				ft_nbrlen_base.c \
				ft_putnbr_fd.c


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
