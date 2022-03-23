/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:02:29 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/21 20:32:47 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	parse_length(char *str, t_flag *build)
{
	int i;

	i = 0;
	if (str[i] == 'l')
		if (str[i + 1] && str[i + 1] == ' l')
			build->length = '7';
		else
			build->length = 'l';
	else if (str[i] == 'h')
		if (str[i + 1] && str[i + 1] == 'h')
			build->length == 'H';
		else
			build->length == 'h';
}
