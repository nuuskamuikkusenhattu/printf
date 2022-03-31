/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:41:59 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/31 22:46:16 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*
this function is called after reading a minus.
it sets the minus to be true, and gets width with ft_atoi.
*/
void	define_minus(t_build *build, const char *format)
{
	int		ret;

	ret = 0;
	build->minus = 1;
	build->i++;
	if (format[build->i] == '0')
		build->i++;
	build->width = ft_atoi(format + build->i + 1);
	ret += ft_num_length(build->width);
	build->i += ret;
	//call print
	return (ret);
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
		pres =  ft_atoi(format + b->i);
		b->precision = pres;
		b->i += ft_num_length(pres);
	}
	else if (format[b->i] == '*')
		b->precision = (int) va_arg(list, int);
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
