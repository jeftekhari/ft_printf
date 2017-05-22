# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeftekha <jeftekha@student.42.us.org       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/21 16:14:36 by jeftekha          #+#    #+#              #
#    Updated: 2017/05/21 16:14:40 by jeftekha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

/usr/bin/make -f

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
