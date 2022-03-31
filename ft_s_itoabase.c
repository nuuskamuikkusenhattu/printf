/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_itoabase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:54:07 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/31 16:10:29 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft/libft.h"

static char	*fill(int nbr, int base, int len, int prec)
{
	int		temp;
	char	*str;
	int		i;
	int		neg;
	
	neg = 0;
	if (nbr < 0)
	{
		neg = 1;
		nbr = nbr * -1;
	}
	i = 0;
	if (prec > len + neg)
	{
		str = ft_strnew(prec + neg);
		if (!str)
			return (NULL);
		if (neg == 1)
		{
			str[i] = '-';
			i = 1;
		}
		while (prec - len + neg > i)
		{
			str[i] = '0';
			i++;
		}
		len = prec - 1;
	}
	else
		str = ft_strnew(len + neg);
	if (!str)
		return (NULL);
	if (neg == 1)
		str[0] = '-';
	while (len + neg >= 0)
	{
		temp = nbr % base;
		if (temp >= 10)
			str[len + neg] = 'a' - 10 + temp;
		else
			str[len + neg] = temp + '0';
		nbr = nbr / base;
		len--;
	}
	return (str);
}

char	*printf_s_itoabase(int nbr, int base, int precision)
{
	int			len;

	if (base < 2)
		return (NULL);
	len = ft_num_length(nbr);
	return (fill(nbr, base, len - 1, precision));
}
