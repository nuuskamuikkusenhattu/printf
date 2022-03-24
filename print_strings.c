/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_strings.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:32:32 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/24 19:59:07 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	print_string_left(char *str, int len, t_build *b)
{
	write(1, str, len);
	while(b->width - len>= 0)
	{
		write(1, b->fill, 1);
		len++;
	}
}

void	print_string_right(char *str, int len, t_build *b)
{
	while (b->width - len >= 0)
	{
		write(1, b->fill, 1);
		b->width--;
	}
	write(1, str, len);
}

void	print_string(t_build *b, char *str)
{
	int		len;

	len = ft_strlen(str);
	if (b->width > len)
		b->print_count += b->width;
	else
		b->print_count += len;
	if (b->minus)
		print_string_left(str, len, b);
	else
		print_string_right(str, len, b);
}
