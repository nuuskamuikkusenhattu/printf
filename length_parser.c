/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_parser.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:02:29 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/31 23:03:51 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	parse_length(char *str, t_build *b)
{
	int i;

	i = 0;
	if (str[i] == 'l')
		if (str[i + 1] && str[i + 1] == 'l')
			b->length = 'L';
		else
			b->length = 'l';
	else if (str[i] == 'h')
	{
		if (str[i + 1] && str[i + 1] == 'h')
			b->length = 'H';
		else
			b->length = 'h';
	}
}
