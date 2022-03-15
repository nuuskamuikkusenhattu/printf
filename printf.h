/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:37:19 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/14 14:54:55 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdarg.h>
#include "libft/libft.h"

typedef	struct s_flag
{
	int		print_count;
	int		base;
	int		precision_dot;
	char	flag;
	int		width;
	int		length;
}			t_flag;

int ft_printf(const char * format, ...);
char	*ft_itoabase(unsigned int nbr, int base);
char	*ftoa(double d, int precision);

#endif