/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_floats.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:46:07 by spuustin          #+#    #+#             */
/*   Updated: 2022/04/08 14:46:28 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	floats(t_build *b, va_list list)
{
	long double num;
	char		*str;
	int			len;

	if (b->length == 'L')
		num = (long double)va_arg(list, long double);
	else
		num = (long double)va_arg(list, double);
	if (b->hashtag == 1 && b->precision == 0)
		b->precision = 1;
	str = ftoa(num, b->precision);
	len = (int) ft_strlen(str);
	write(1, str, len);
	b->print_count += len;
	free(str);
}
