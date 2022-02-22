/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:26:53 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/11 15:58:09 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int i = 0;
	int j = 42;
	int n = -0;
	int k = -2147483648;
	int l = 2147483647;
	ft_putnbr(i);
	putchar('\n');
	ft_putnbr(j);
	putchar('\n');
	ft_putnbr(n);
	putchar('\n');
	ft_putnbr(k);
	putchar('\n');
	ft_putnbr(l);
	putchar('\n');
	return (0);
}