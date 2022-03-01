/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:57:07 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/01 14:02:09 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// takes a double / float as parameter and turns it into ascii char,
//probably

#include "libft/libft.h"
#include <stdio.h>

static char	*fill(double c, int precision)
{
	char	*new;
	int		len;

	len = ft_num_length(c);
	new = ft_strnew(len + 1);
	if (!new)
		exit(1);
	while (precision-- > 0)
	{
		new[len] = (int) c % 10 + '0';
		c = c / 10;
		len--;
	}
	new[len] = '.';
	len--;
	while (len >= 0)
	{
		new[len] = (int) c % 10 + '0';
		c = c / 10;
		len--;
	}
	return (new);
}

char	*ftoa(double d, int precision)
{
	int		i;
	double	g;

	i = 0;
	while (precision > i++)
		d = d * 10;
	return (fill(d, precision));
}

int main(void)
{
	double	a = 65456546546545.1;
	char *str = ftoa(a, 1);

	ft_putstr(str);
	return (0);
}
