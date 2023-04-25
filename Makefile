##
## EPITECH PROJECT, 2022
## Makefiles
## File description:
## rpg
##

SRC	=	$(wildcard src/*.c src/player/*.c src/destroy/*.c src/render/*.c \
src/utils/*.c src/window/*.c src/collision/*.c src/inventory/*.c \
src/quest/*.c src/map/*.c src/options/*.c src/item/*.c src/save/*.c \
src/animation/*.c src/interact/*.c src/sound/*.c \
src/particle/*.c src/menu/*.c \
src/menu/text_save/*.c src/menu/control_change/*.c \
src/entity/*.c src/dialogue/*.c src/fight/*.c \
src/fight/**/*.c)

OBJ	=	$(SRC:.c=.o)

CFLAGS = -W -Wall -Wextra

NAME = libmy.a
NAMED =	my_rpg

CSFML = -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	mv lib/my/libmy.a .
	ar rc $(NAME) $(OBJ)
	gcc -o $(NAMED) src/main.c -I include/ -L. -lmy $(CSFML) $(CFLAGS) -lm

clean:
	make -C lib/my clean
	rm -f $(wildcard lib/my/.# lib/my/*~)
	rm -f $(wildcard file/.# file/*~)
	rm -f $(wildcard .# *~)
	rm -f $(wildcard vgcore.*)
	rm -f $(OBJ)

fclean :	clean
	make -C lib/my fclean
	rm -f $(NAME)
	rm -f $(NAMED)
	rm -f $(OBJ)

re:	fclean all

.PHONY: all clean fclean re
