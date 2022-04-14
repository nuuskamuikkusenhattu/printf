/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision_and_width.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:41:59 by spuustin          #+#    #+#             */
/*   Updated: 2022/04/14 11:45:09 by spuustin         ###   ########.fr       */
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
	if (build->fill == '0')
		build->fill = ' ';
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
		b->precision = ft_atoi(format + b->i);
		b->i += ft_num_length(ft_atoi(format + b->i)) - 1;
		b->prec_defined = 1;
	}
	else if (format[b->i] == '*')
	{
		pres = (int)va_arg(list, int);
		if (pres >= 0)
		{
			b->precision = pres;
			b->prec_defined = 1;
		}
	}
	else
	{
		b->precision = 0;
		b->prec_defined = 1;
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
	b->width = w;
	b->i += ft_num_length(w) - 1;
}

void	fix_precision_with_hash(t_build *b)
{
	if (b->flag == 'o' && b->precision != 0)
		b->precision--;
}

int	ft_av(t_build *b, int n)
{
	if (n < 0)
	{
		b->minus = 1;
		return (n * -1);
	}
	else
		return (n);
}
