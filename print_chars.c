/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_chars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:00:26 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/24 11:59:16 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	print_char_left(char c, t_build *b)
{
	write(1, &c, 1);
	while(b->width > 1)
	{
		write(1, &(b->fill), 1);
		b->width--;
	}
}

void	print_char_right(char c, t_build *b)
{
	while(b->width > 1)
	{
		write(1, &(b->fill), 1);
		b->width--;
	}
	write(1, &c, 1);
}

void	print_char(char c, t_build *b)
{
	b->print_count += b->width;
	if (b->width == 0)
		b->print_count++;
	if (b->minus)
		print_char_left(c, b);
	else
		print_char_right(c, b);
}
