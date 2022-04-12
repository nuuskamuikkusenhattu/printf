/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:38:23 by spuustin          #+#    #+#             */
/*   Updated: 2022/04/12 22:20:33 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	print_null_pointer(t_build *b)
{
	b->width -= 3;
	if (b->minus == 0)
		print_only_width(b);
	print_hash(b);
	if (b->prec_defined == 0)
	b->precision = 1;
	while (b->precision > 0)
	{
		write(1, "0", 1);
		b->precision--;
		b->print_count++;
	}
	if (b->minus == 1)
		print_only_width(b);
}

void	print_pointer(t_build *b, va_list list)
{
	char	*ret;

	octal_or_hexal(b, 'x');
	b->hashtag = 1;
	b->u_value = (unsigned long long)va_arg(list, unsigned long long);
	if (b->u_value != 0)
	{	
		b->width -= 2;
		ret = printf_itoabase(b->u_value, 16, b->precision, b);
		print_number(b, ret);
		free(ret);
	}
	else
		print_null_pointer(b);
}
