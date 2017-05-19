#!/usr/bin/make -f

LIBRARY = ../libft/libft.a

NAME = libftprintf.ah

OBJECTS = 

CFLAGS = -Wall -Werror -Wextra -g

.PHONY:all clean fclean re information
all: information $(NAME)

$(NAME): $(OBJECTS)
	make -C ../libs/libft/
	$(CC) $(CFLAGS)  $(OBJECTS) -L. ../libs/libft/libft.a -o $@
	ar rcs $(NAME) $(OBJECTS:.o=.c)
	ranlib $(NAME)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME) $(OBJECTS)
re: fclean all

information:
	@printf "Build mode "$(mode)" selected\n"
