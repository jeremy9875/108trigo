##
## Makefile for Makefile in /home/VSridhar78/106bombyx
## 
## Made by Sridhar Vengadesan
## Login   <VSridhar78@epitech.net>
## 
## Started on  Mon Feb  6 10:22:56 2017 Sridhar Vengadesan
## Last update Wed Mar 15 09:30:52 2017 Sridhar Vengadesan
##

NAME    =       108trigo

SRC     =       108trigo.c		\

OBJ     =       $(SRC:.c=.o)

all:            $(NAME)

$(NAME):        $(OBJ)
		gcc $(OBJ) -W -Wall -Werror -Wextra -o $(NAME)

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)

re:             fclean all

.PHONY:         all clean fclean re
