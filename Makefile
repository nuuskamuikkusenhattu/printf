# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 13:25:48 by spuustin          #+#    #+#              #
#    Updated: 2022/04/11 12:18:33 by spuustin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFILES = ft_printf.c build.c ftoa.c help_print.c length_parser.c \
print_chars.c print_numbers.c print_pointers.c print_strings.c printf_itoabase.c\
print_floats.c get_value.c precision_and_width.c validation.c
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
	make -C ./libft fclean
	rm -rf $(NAME)
re: fclean all