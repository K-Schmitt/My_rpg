##
## EPITECH PROJECT, 2022
## pushswap
## File description:
## Makefile
##

CC = gcc

CFLAGS = -W -Wall -Wextra -g2

INCLUDES = -I.

LFLAGS = -L. -lcsfml-window -lcsfml-system -lcsfml-graphics -lcsfml-audio

LIBS = -lmy

SRC_PATH = csfmLib/

MAIN = libmy.a

SRCS = $(wildcard $(patsubst %, %*.c, $(SRC_PATH)))

OBJS = $(SRCS:.c=.o)

all : $(MAIN)

$(MAIN) : $(OBJS)

	ar rc $(MAIN) $(OBJS)

.c.o :
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean :
	$(RM) $(OBJS) *~

fclean : clean
	$(RM) $(MAIN)

re : fclean all
