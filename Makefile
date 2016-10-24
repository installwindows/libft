# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: varnaud <varnaud@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/25 14:46:58 by varnaud           #+#    #+#              #
#    Updated: 2016/10/24 09:32:18 by varnaud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = {ft_abs.c,ft_atoi.c,ft_atoi_base.c,ft_bzero.c,ft_ctoi.c,ft_isalnum.c,ft_isalpha.c,ft_isascii.c,ft_isdigit.c,ft_isprint.c,ft_iswhitespace.c,ft_itoa.c,ft_itoa_base.c,ft_lstadd.c,ft_lstdel.c,ft_lstdelone.c,ft_lstiter.c,ft_lstmap.c,ft_lstnew.c,ft_memalloc.c,ft_memccpy.c,ft_memchr.c,ft_memcmp.c,ft_memcpy.c,ft_memdel.c,ft_memmove.c,ft_memset.c,ft_pow.c,ft_putchar.c,ft_putchar_fd.c,ft_putendl.c,ft_putendl_fd.c,ft_putnbr.c,ft_putnbr_fd.c,ft_putstr.c,ft_putstr_fd.c,ft_stradd.c,ft_strcat.c,ft_strchr.c,ft_strclr.c,ft_strcmp.c,ft_strcpy.c,ft_strdel.c,ft_strdup.c,ft_strequ.c,ft_striter.c,ft_striteri.c,ft_strjoin.c,ft_strlcat.c,ft_strlen.c,ft_strmap.c,ft_strmapi.c,ft_strncat.c,ft_strncmp.c,ft_strncpy.c,ft_strnequ.c,ft_strnew.c,ft_strnstr.c,ft_strrchr.c,ft_strrev.c,ft_strsplit.c,ft_strstr.c,ft_strsub.c,ft_strtrim.c,ft_tolower.c,ft_toupper.c,ft_squareplusplus.c,ft_strnadd.c}
OBJ = ft_abs.o ft_atoi.o ft_atoi_base.o ft_bzero.o ft_ctoi.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_iswhitespace.o ft_itoa.o ft_itoa_base.o ft_lstadd.o ft_lstdel.o ft_lstdelone.o ft_lstiter.o ft_lstmap.o ft_lstnew.o ft_memalloc.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memdel.o ft_memmove.o ft_memset.o ft_pow.o ft_putchar.o ft_putchar_fd.o ft_putendl.o ft_putendl_fd.o ft_putnbr.o ft_putnbr_fd.o ft_putstr.o ft_putstr_fd.o ft_stradd.o ft_strcat.o ft_strchr.o ft_strclr.o ft_strcmp.o ft_strcpy.o ft_strdel.o ft_strdup.o ft_strequ.o ft_striter.o ft_striteri.o ft_strjoin.o ft_strlcat.o ft_strlen.o ft_strmap.o ft_strmapi.o ft_strncat.o ft_strncmp.o ft_strncpy.o ft_strnequ.o ft_strnew.o ft_strnstr.o ft_strrchr.o ft_strrev.o ft_strsplit.o ft_strstr.o ft_strsub.o ft_strtrim.o ft_tolower.o ft_toupper.o ft_squareplusplus.o ft_strnadd.o
CC = gcc
CFLAGS = -c -Wall -Werror -Wextra -I.
ARRC = ar rc
REMOVE = /bin/rm -f
RANLIB = ranlib

.PHONY: clean fclean all re

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC)
	$(ARRC) $(NAME) $(OBJ)
	$(RANLIB) $(NAME)

clean:
	$(REMOVE) $(OBJ)

fclean:
	$(REMOVE) $(OBJ) $(NAME)

re: fclean all
