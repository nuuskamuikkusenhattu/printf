/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:37:19 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/21 20:10:34 by spuustin         ###   ########.fr       */
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
	int		base;
	long long	value;
	char	dot;
	int		precision;
	char	flag;
	int		width;
	char	length; //could be char, too (l / L)
}			t_flag;

int ft_printf(const char * format, ...);
char	*ft_itoabase(unsigned int nbr, int base);
char	*ftoa(double d, int precision);
void new_build(t_flag *new);

//numbers
void	signed_ints(t_flag *build, char *format, va_list *list);
void	unsigned_ints(t_flag *build, char *format, va_list *list);

#endif