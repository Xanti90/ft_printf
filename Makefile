LIB = ar rcs
RM = rm -f

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a
MY_SOURCES = ft_printf.c \

all:    $(NAME)

$(NAME): $(MY_OBJECTS) $(INCLUDE)
	@ar r $(LIB) $(NAME) $(MY_OBJECTS) $(INCLUDE)

compile:
	$(CC) $(FLAGS) main.c -L. -lfprintf

test: re compile

clean:
		@rm -f $(MY_OBJECTS)
		
fclean: clean
		@rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re
