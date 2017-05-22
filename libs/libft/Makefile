# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/27 14:34:08 by jeftekha          #+#    #+#              #
#    Updated: 2017/04/27 14:34:11 by jeftekha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = libft.a
CC = gcc
FLAGS =	-Wall -Werror -Wextra
ODIR = ./
IDIR = ./
SRC =
OBJ = $(SRC:.c=.o)
EXT = $(IDIR)$(NAME:.a=.h)
EXT += Makefile

SRC += ft_putchar_fd.c
SRC += ft_putstr_fd.c
SRC += ft_putnbr_base_fd.c
SRC += ft_putnbr_fd.c
SRC += ft_putendl_fd.c
SRC += ft_putchar.c
SRC += ft_putstr.c
SRC += ft_putendl.c
SRC += ft_putnbr.c
SRC += ft_set_print_color_to.c
SRC += ft_puterr.c
SRC += ft_isdigit.c
SRC += ft_isalpha.c
SRC += ft_isupper.c
SRC += ft_islower.c
SRC += ft_isprint.c
SRC += ft_isascii.c
SRC += ft_isalnum.c
SRC += ft_isspace.c
SRC += ft_isspacelinetab.c
SRC += ft_toupper.c
SRC += ft_tolower.c
SRC += ft_trans_toupper.c
SRC += ft_trans_tolower.c
SRC += ft_strlen.c
SRC += ft_strcpy.c
SRC += ft_strncpy.c
SRC += ft_strdup.c
SRC += ft_strcat.c
SRC += ft_strncat.c
SRC += ft_strlcat.c
SRC += ft_strcmp.c
SRC += ft_strncmp.c
SRC += ft_strchr.c
SRC += ft_strrchr.c
SRC += ft_strstr.c
SRC += ft_strnstr.c
SRC += ft_skip_spaces.c
SRC += ft_skip_delim.c
SRC += ft_strnew.c
SRC += ft_strdel.c
SRC += ft_strclr.c
SRC += ft_striter.c
SRC += ft_striteri.c
SRC += ft_strmap.c
SRC += ft_strmapi.c
SRC += ft_strequ.c
SRC += ft_strnequ.c
SRC += ft_strsub.c
SRC += ft_strjoin.c
SRC += ft_strltrim.c
SRC += ft_strrtrim.c
SRC += ft_strtrim.c
SRC += ft_strsplit.c
SRC += ft_word_count.c
SRC += ft_strrev.c
SRC += ft_tabnew.c
SRC += ft_atoi.c
SRC += ft_atoi_base.c
SRC += ft_itoa.c
SRC += ft_ltoa_base.c
SRC += ft_count_digits.c
SRC += ft_memset.c
SRC += ft_memcpy.c
SRC += ft_memccpy.c
SRC += ft_memmove.c
SRC += ft_memchr.c
SRC += ft_bzero.c
SRC += ft_memcmp.c
SRC += ft_memalloc.c
SRC += ft_memdel.c
SRC += ft_lstnew.c
SRC += ft_lstdelone.c
SRC += ft_lstdel.c
SRC += ft_lstadd.c
SRC += ft_lstiter.c
SRC += ft_lstmap.c
SRC += ft_strclen.c
SRC += ft_strcdup.c
SRC += ft_strndup.c
SRC += open_file_read_only.c
SRC += get_next_line.c
SRC += ft_strtol.c

O = $(addprefix $(ODIR), $(OBJ))

all: $(NAME)

$(NAME): $(O) $(EXT)
	@echo "archive time $(NAME)..."
	@ar rc $(NAME) $(O)
	@echo "Indexing archive $(NAME)..."
	@ranlib $(NAME)
	@echo "Wubalubadubdub!"

$(ODIR)%.o: %.c $(EXT)
	@echo "gettin shwifty with $<..."
	@$(CC) $(FLAGS) -I$(IDIR) -c $< -o $@

clean:
	@echo "Cleaning '.o' and '.out' objects yo..."
	rm -f *.o *.out

fclean: clean
	rm -f $(NAME)

re: fclean all
