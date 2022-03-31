/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:15:54 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/31 21:44:52 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill(unsigned int nbr, int base, int len, int prec)
{
	int		temp;
	char	*str;
	int		i;
	
	i = 0;
	if (prec > len)
	{
		str = ft_strnew(prec);
		if (!str)
			return (NULL);
		while (prec - len > i)
		{
			str[i] = '0';
			i++;
		}
		len = prec - 1;
	}
	else
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

char	*ft_itoabase(unsigned int nbr, int base, int precision)
{
	int			len;

	if (base < 2)
		return (NULL);
	len = num_len(nbr, base);
	return (fill(nbr, base, len - 1, precision));
}
