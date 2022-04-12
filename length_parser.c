/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_parser.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:02:29 by spuustin          #+#    #+#             */
/*   Updated: 2022/04/11 14:57:13 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	parse_length(const char *str, t_build *b)
{
	if (str[b->i] == 'l')
	{
		if (str[b->i + 1] && str[b->i + 1] == 'l')
		{
			b->length = 'L';
			b->i++;
		}
		else
			b->length = 'l';
	}
	else if (str[b->i] == 'h')
	{
		if (str[b->i + 1] && str[b->i + 1] == 'h')
		{
			b->length = 'H';
			b->i++;
		}
		else
			b->length = 'h';
	}
	else if (str[b->i] == 'L')
		b->length = 'D';
}
