/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:55:22 by spuustin          #+#    #+#             */
/*   Updated: 2022/04/11 11:47:40 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	printf_plus_or_space(t_build *b)
{
	if (b->plus == 1 && b->isneg == 0)
	{
		write(1, "+", 1);
		b->print_count++;
	}
	else if (b->space == 1 && b->isneg == 0 && b->plus == 0)
	{
		write (1, " ", 1);
		b->print_count++;
	}
}

void	print_hash(t_build *b)
{
	if (b->flag == 'o')
	{
		write(1, "0", 1);
		b->print_count ++;
		b->precision--;
	}
	else
	{
		if (b->flag == 'x')
			write(1, "0x", 2);
		else if (b->flag == 'X')
			write(1, "0X", 2);
		b->print_count += 2;
		if (b->width > b->strlen - 2 && b->fill != '0' && b->minus != 1)
			b->width -= 2;
	}
}
