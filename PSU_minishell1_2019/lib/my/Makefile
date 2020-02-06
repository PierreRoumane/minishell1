##
## EPITECH PROJECT, 2018
## Makefile libmy.a
## File description:
## Makefile that prepare the lib
##

SRC =	./my_putstr_non_print.c \
		./my_putstrerror.c \
		./my_putbase_hexa.c \
		./my_putpointer.c \
		./my_getnbr_base.c \
		./my_put_nbr.c \
		./my_putchar.c \
		./put_to_norme.c \
		./my_str_compare.c \
		./add_multiplicator.c \
		./my_isneg.c \
		./my_putstr.c \
		./my_strlen.c \
		./my_getnbr.c \
		./my_strcpy.c \
		./my_strncpy.c \
		./my_strstr.c \
		./my_strcmp.c \
		./my_strncmp.c \
		./my_str_isalpha.c \
		./my_strcat.c \
		./my_strncat.c \
		./my_str_to_wordtab.c \
		./my_path_to_wordtab.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -I ../../include/

NAME	=	libmy.a

all:	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
