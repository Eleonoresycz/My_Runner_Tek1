##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC 	=	my_putchar.c \
		my_putstr.c	\
		my_getnbr.c	\
		my_put_nbr.c \
		my_revstr.c	\
		my_strcat.c \
		my_strlen.c \
		my_put_octal.c \
		my_put_binary.c \
		my_put_dec_unsigned.c \
		my_put_hexa.c \
		my_put_adress.c \
		my_putstrmaj.c \
		my_strcpy.c \
		my_strdup.c \
		my_strcmp.c \
		my_printf.c \
		my_nbrlen.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all: 		$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean :
	rm -f $(NAME)
	rm -f ../../libmy.a