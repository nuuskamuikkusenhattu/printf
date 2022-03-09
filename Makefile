# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 13:25:48 by spuustin          #+#    #+#              #
#    Updated: 2022/03/08 16:37:54 by spuustin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lib
CFILES = ft_itoabase.c main.c
FLAGS = -g -Wall -Werror -Wextra
INCL = -I ./libft/
LIB = -L ./libft -lft

all: $(NAME)

$(NAME):
	make -C ./libft re
	gcc $(FLAGS) $(INCl) $(CFILES) $(LIB) -o $(NAME)
	rm -rf lib.dSYM

clean:
	make -C ./libft clean
	rm -f *.o

fclean: clean
	make -C ./libft fclean
	rm $(NAME)
re: fclean all