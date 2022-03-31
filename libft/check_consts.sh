# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    check_consts.sh                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/25 15:34:30 by spuustin          #+#    #+#              #
#    Updated: 2022/02/25 16:28:07 by spuustin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

echo "counting 'const chars', should be (at least) 14"

cat libft.h | grep 'const char' | wc -l

echo "counting 'char const's, should be (at least) 12"

cat libft.h | grep 'char const' | wc -l

echo "checking for amount of restricts' to be equal to zero"

cat libft.h | grep 'restrict' | wc -l

echo "checking for parameters in .c -files
"

#a_files contain exactly one 'const char' in main prototype

for a_files in ft_atoi.c ft_strrchr.c ft_strncpy.c ft_strncat.c ft_strlen.c \
ft_strlcat.c ft_strcpy.c ft_strchr.c ft_strcat.c ft_strdup.c

do
if grep -q "const char" $a_files; then
	echo $a_files": OK"
else
	echo $a_files" contains parameter-error"
fi
done

#b_files contain exactly two 'const char's in main prototype
for b_files in ft_strstr.c ft_strnstr.c ft_strncmp.c ft_strcmp.c

do
if grep -q -E "(const char.*){2}" $b_files; then
	echo $b_files": OK"
else
	echo $b_files" contains parameter-error"
fi
done
#c_files contain exactly one 'char const's in main prototype
for c_files in ft_strtrim.c ft_strsub.c ft_strsplit.c ft_strmap.c \
ft_strmapi.c ft_strjoin.c ft_putstr_fd.c ft_putstr.c ft_putendl.c ft_putendl_fd.c \

do
if grep -q "char const" $c_files; then
	echo $c_files": OK"
else
	echo $c_files" contains parameter-error"
fi
done

#d_files contain exactly two 'char const's in main prototype
for d_files in ft_strequ.c ft_strnequ.c

do
if grep -q -E "(char const.*){2}" $d_files; then
	echo $d_files": OK"
else
	echo $d_files" contains parameter-error"
fi
done
#e_files contain exactly one 'const void' in main prototype
for e_files in ft_memmove.c ft_memcpy.c ft_memchr.c ft_memccpy.c

do
if grep -q "const void" $e_files; then
	echo $e_files": OK"
else
	echo $e_files" contains parameter-error"
fi
done
#f_files contain exactly two 'const void's in main prototype
for f_files in ft_memcmp.c

do
if grep -q -E "(const void.*){2}" $f_files; then
	echo $f_files": OK"
else
	echo $f_files" contains parameter-error"
fi
done