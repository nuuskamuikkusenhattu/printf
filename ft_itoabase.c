/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:15:54 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/08 17:06:26 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft/libft.h"
#include <stdio.h>

static char	*fill(unsigned int nbr, int base, int len)
{
	int		temp;
	char	*str;

	str = ft_strnew(len);
	if (!str)
		return (NULL);
	while (len >= 0)
	{
		temp = nbr % base;
		if (temp >= 10)
			str[len] = 'a' - 10 + temp;
		else
			str[len] = temp + '0';
		nbr = nbr / base;
		len--;
	}
	return (str);
}

static int	num_len(unsigned int nbr, int base)
{
	int		len;

	len = 1;
	while (nbr >= (unsigned int) base)
	{
		nbr = nbr / base;
		len++;
	}
	return (len);
}

char	*ft_itoabase(unsigned int nbr, int base)
{
	int			len;

	if (base < 2)
		return (NULL);
	len = num_len(nbr, base);
	return (fill(nbr, base, len - 1));
}
