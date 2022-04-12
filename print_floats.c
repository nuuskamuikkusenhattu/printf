/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_floats.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:46:07 by spuustin          #+#    #+#             */
/*   Updated: 2022/04/11 15:44:40 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	is_roundable(long double num)
{
	int		x;

	x = num;
	if (x % 2 == 1)
		return (1);
	return (0);
}

static long double	round(int prec, long double num)
{
	long double	ret;

	ret = 0.5;
	if (num < 0)
		ret *= -1;
	while (prec > 0)
	{
		ret = ret / 10.0;
		prec--;
	}
	return (ret);
}

static void	fix_precision(t_build *b)
{
	if (b->precision > 20)
		b->precision = 20;
	if (b->prec_defined == 0)
		b->precision = 6;
	if (b->prec_defined == 1 && b->precision == 0 && b->hashtag == 1)
		b->precision = 1;
}

void	floats(t_build *b, va_list list)
{
	char		*str;

	if (b->length == 'D')
		b->f_value = (long double)va_arg(list, long double);
	else
		b->f_value = (long double)va_arg(list, double);
	fix_precision(b);
	if (is_roundable(b->f_value) == 1)
		b->f_value += round(b->precision, b->f_value);
	if (b->f_value < 0)
	{
		b->isneg = 1;
		b->f_value = b->f_value * -1;
	}
	str = ftoa(b->f_value, b->precision, b);
	write(1, str, b->strlen);
	b->print_count += b->strlen;
	free(str);
}
