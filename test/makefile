NAME=test
SRC=main.c test_ft_sqrt.c
OBJ=$(SRC:.c=.o)
CC=gcc
CFLAGS=-Wall -Werror -Wextra -g -I../ 

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): libft $(OBJ)
	$(CC) -L../ -lft -o $(NAME) $(OBJ) $(CFLAGS)

$(OBJ): test.h

libft: ../libft.h
	make -C ..
