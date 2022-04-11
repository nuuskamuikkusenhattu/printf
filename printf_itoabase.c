/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_itoabase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:15:54 by spuustin          #+#    #+#             */
/*   Updated: 2022/04/11 11:46:02 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	fill_2(int len, unsigned long long int nbr, int base, char *str)
{
	int		temp;

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
}

static char	*fill(unsigned long long int nbr, int base, int len, int prec)
{
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
	fill_2(len, nbr, base, str);
	return (str);
}

static int	num_len(unsigned long long int nbr, int base, t_build *b)
{
	int		len;

	len = 1;
	while (nbr >= (unsigned int) base)
	{
		nbr = nbr / base;
		len++;
	}
	b->strlen = len;
	if (b->precision > len)
		b->strlen += (b->precision - len);
	return (len);
}

char	*printf_itoabase(unsigned long long int n, int base, int p, t_build *b)
{
	int			len;

	if (p == 0 && n == 0 && b->base == 10)
		return (ft_strdup(""));
	if (base < 2)
		return (NULL);
	len = num_len(n, base, b);
	return (fill(n, base, len - 1, p));
}
