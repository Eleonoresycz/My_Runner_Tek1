##
## EPITECH PROJECT, 2020
## Eleonore Sycz
## File description:
## Makefile
## (antho le plus beau)

CFLAGS	= -W -Wall -Wextra

CFLAGS += -I./include/ -Llib/my -lmy -g

CFLAGS += -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

SRC	=	my_runner.c \
		fct.c \
		destroy_var.c \
		def_var_struct.c \
		def_var_struct2.c \
		get_pos.c \
		interactions.c \
		clock.c \
		move_bgrd.c \
		move_bgrd2.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_runner

all:	$(NAME)

$(NAME):	$(OBJ)
		make -C lib/my
		make -C lib/my clean
		gcc $(OBJ) -o $(NAME) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -rf $(NAME)
		make -C lib/my fclean

re:	fclean all