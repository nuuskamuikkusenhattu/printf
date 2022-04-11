/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:41:59 by spuustin          #+#    #+#             */
/*   Updated: 2022/04/11 11:51:04 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*
this function is called after reading a minus.
it sets the minus to be true, and gets width with ft_atoi.
*/
void	define_minus(t_build *build, const char *format)
{
	build->minus = 1;
	if (format[build->i + 1] && format[build->i + 1] == '0')
		build->i++;
}
/*
this function is called after reading a dot.
it then sets precision with ft_atoi, or from argument-list,
depending if theres a * or a number between 1-9.
*/

void	set_precision(t_build *b, const char *format, va_list list)
{
	int		pres;

	b->i++;
	if (format[b->i] >= '1' && format[b->i] <= '9')
	{
		pres = ft_atoi(format + b->i);
		b->precision = pres;
		b->i += ft_num_length(pres) - 1;
	}
	else if (format[b->i] == '*')
	{
		b->precision = (int)va_arg(list, int);
		b->i--;
	}
	else
	{
		b->precision = 0;
		b->i--;
	}
}
/*
this function sets width after a digit between 1-9 is read.
*/

void	get_width(t_build *b, const char *format)
{
	int		w;

	w = ft_atoi(format + b->i);
	b->width += w;
	b->i += ft_num_length(w) - 1;
}
