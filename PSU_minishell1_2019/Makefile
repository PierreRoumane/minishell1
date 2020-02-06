##
## EPITECH PROJECT, 2019
## CPool_lib_2019
## File description:
## Makefile for test DO NOT PUSH
##

NAME	=	mysh

SRC = 	src/main.c \
		src/env_handling.c \
		src/setenv_handling.c \
		src/fct_misc.c \
		src/command.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -I include/ -g

LDFLAGS	=	-L lib/my/ -lmy

RM 	=	find . \( -name "*.o" -o -name "*~" \) -delete

all:	lib_compile $(NAME)

lib_compile:
	make -C lib/my/ --no-print-directory

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)
	$(RM)

clean:
	make clean -C lib/my/ --no-print-directory
	$(RM)

fclean: clean
	$(RM)
	make fclean -C lib/my/ --no-print-directory

re:	fclean all
