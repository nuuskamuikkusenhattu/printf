/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:37:19 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/31 22:45:13 by spuustin         ###   ########.fr       */
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
	int		precision;
	char	flag;
	int		width;
	char	fill;
	char	length; //h,H(hh),l, L(ll)
	int		plus;
	int		minus;
	int		space;
	char	hashtag; //adds a decimalpoint to floats even when no decimals
	int 	unwritten;
	int		strlen;
	int		isneg;
}			t_build;

int ft_printf(const char * format, ...);

//struct
void reset_build(t_build *new);

//width
void	define_minus(t_build *build, const char *format);
void	get_width(t_build *b, const char *format);
//precision
void	set_precision(t_build *build, const char *format, va_list list);

//integers
void	signed_ints(t_build *build, va_list list);
void	unsigned_ints(t_build *build, va_list list);
char	*printf_itoabase(unsigned int nbr, int base, int precision, t_build *b);

//floats
char	*ftoa(long double d, int precision);

//chars
void	print_char(char c, t_build *b);

//helpers
void	printf_plus_or_space(t_build *b)
#endif