/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:11:22 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/29 12:23:19 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_length(int n)
{
	int		i;

	i = 1;
	while (n >= 10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char	*min_int(void)
{
	char	*min;

	min = ft_strdup("-2147483648");
	return (min);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		length;
	int		neg;

	neg = 0;
	if (n == -2147483648)
		return (min_int());
	if (n < 0)
	{
		neg = 1;
		n = n * -1;
	}
	length = num_length(n) + 1;
	number = (char *)malloc(sizeof(*number) * (length + neg));
	if (!number)
		return (NULL);
	number[length + neg - 1] = '\0';
	while (--length + neg > 0)
	{
		number[length + neg - 1] = n % 10 + '0';
		n = n / 10;
	}
	if (neg == 1)
		number[0] = '-';
	return (number);
}
