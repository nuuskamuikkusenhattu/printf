/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:17:28 by spuustin          #+#    #+#             */
/*   Updated: 2022/04/13 21:32:32 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

// returns 1 if a given char is part of a valid flag

int	is_valid_prechar(char c)
{
	if (c == '-' || c == '.' || c == 'l' || c == 'L' || c == 'h' || c == '#' \
	|| (c >= '0' && c <= '9' ) || c == ' ' || c == '+' || c == '-' || c == '*')
		return (1);
	return (0);
}

void	octal_or_hexal(t_build *b, char c)
{
	b->flag = c;
	if (c == 'x' || c == 'X')
		b->base = 16;
	if (c == 'o')
	{
		b->base = 8;
		if (b->hashtag == 1)
			b->prefix = 1;
		if (b->hashtag == 1 && b->precision != 0)
		b->precision--;
	}
	b->space = 0;
	b->plus = 0;
}
