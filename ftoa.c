/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:57:07 by spuustin          #+#    #+#             */
/*   Updated: 2022/04/11 15:22:39 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// takes a double / float as parameter and turns it into ascii char pointer,
//probably

#include "printf.h"

static char	*fill_zero(long double c, t_build *b)
{
	int		len;
	char	*new;

	len = ft_num_length(c);
	b->strlen = len;
	new = ft_strnew(len);
	if (!new)
		return (NULL);
	while (len > 0)
	{
		new[len - 1] = (long long) c % 10 + '0';
		c = c / 10;
		len--;
	}
	return (new);
}

static char	*fill(long double c, int precision, t_build *b)
{
	char	*new;
	int		len;

	len = ft_num_length(c);
	b->strlen = len + 1;
	new = ft_strnew(len + 1);
	if (!new)
		return (NULL);
	while (precision-- > 0)
	{
		new[len] = (long long) c % 10 + '0';
		c = c / 10;
		len--;
	}
	new[len] = '.';
	len--;
	while (len >= 0)
	{
		new[len] = (long long) c % 10 + '0';
		c = c / 10;
		len--;
	}
	return (new);
}

char	*ftoa(long double d, int precision, t_build *b)
{
	int		i;

	i = 0;
	while (precision > i++)
		d = d * 10;
	if (precision == 0)
		return (fill_zero(d, b));
	else
		return (fill(d, precision, b));
}
