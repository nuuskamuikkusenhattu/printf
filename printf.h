/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:37:19 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/24 22:32:02 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdarg.h>
#include "libft/libft.h"
#include <unistd.h>
#include <stdio.h> //debug
#include <stdlib.h>

typedef	struct s_build
{
	int		print_count;
	int		i;
	int		base;
	char	dot;
	int		precision;
	char	flag;
	int		width;
	char	fill;
	char	length; //h,H(hh),l, L(ll)
	char	plus;
	char	minus;
	char	hashtag; //adds a decimalpoint to floats even when no decimals
}			t_build;

int ft_printf(const char * format, ...);
char	*ftoa(double d, int precision);
void new_build(t_build *new);

//width
int		printf_minus(t_build *build, const char *format, va_list *list);

//integers
void	signed_ints(t_build *build, va_list list);
void	unsigned_ints(t_build *build, va_list list);
char	*printf_itoabase(unsigned int nbr, int base, int precision);

//strings
void	print_string(t_build *b, char *str);

//chars
void	print_char(char c, t_build *b);

#endif