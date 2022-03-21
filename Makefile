# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 13:25:48 by spuustin          #+#    #+#              #
#    Updated: 2022/03/21 20:10:46 by spuustin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lib.a
CFILES = ft_itoabase.c build.c integers.c
OFILES = *.o libft/*.o
FLAGS = -g -Wall -Werror -Wextra
INCL = .

all: $(NAME)

$(NAME):
	make -C ./libft re
	gcc $(FLAGS) -I $(INCL) -c $(CFILES)
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)

clean:
	make -C ./libft clean
	rm -rf *.o
	rm -rf libft/*.o

fclean: clean
	make -C ./libft clean
	rm -rf $(NAME)

re: fclean all