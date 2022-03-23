/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:37:19 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/23 14:46:11 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdarg.h>
#include "libft/libft.h"
#include <unistd.h>
#include <stdlib.h>

typedef	struct s_flag
{
	int		print_count;
	int		i;
	int		base;
	long long	value;
	char	dot;
	int		precision;
	char	flag;
	int		width;
	char	length; //h,H(hh),l,7(ll),L
	char	plus;
	char	minus;
	char	hashtag; //adds a decimalpoint to floats even when no decimals
}			t_flag;

int ft_printf(const char * format, ...);
char	*ftoa(double d, int precision);
void new_build(t_flag *new);

//integers
void	signed_ints(t_flag *build, va_list *list);
void	unsigned_ints(t_flag *build, va_list *list);
char	*printf_itoabase(unsigned int nbr, int base, int precision);

//strings
void	print_string(char *format, t_flag *build);

//width
int		printf_minus(t_flag *build, char *format);

#endif