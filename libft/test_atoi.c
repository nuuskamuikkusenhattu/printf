/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:07:23 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/29 18:06:22 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
void test_atoi(void)
{
	const char *n1 = "-911";
	const char *n2 = "   050";
	const char *n3 = "42school";
	const char *n4 = "school42";
	const char *n5 = "\t\n\v\f\r 42";
	const char *n6 = "-0";
	const char *n8 = "+-2";
	const char *n9 = "-+2";
	const char *n10 = "			  	 	 \t \n   	     ";
	int pass = 0;
	if (ft_atoi(n1) == atoi(n1))
		pass++;
	else
		printf("mine: %d, their: %d\n", ft_atoi(n1), atoi(n1));
	if (ft_atoi(n2) == atoi(n2))
		pass++;
	else
		printf("mine: %d, their: %d\n", ft_atoi(n2), atoi(n2));
	if (ft_atoi(n3) == atoi(n3))
		pass++;
	else
		printf("mine: %d, their: %d\n", ft_atoi(n3), atoi(n3));
	if (ft_atoi(n4) == atoi(n4))
		pass++;
	else
		printf("mine: %d, their: %d\n", ft_atoi(n4), atoi(n4));
	if (ft_atoi(n5) == atoi(n5))
		pass++;
	else
		printf("mine: %d, their: %d\n", ft_atoi(n5), atoi(n5));
	if (ft_atoi(n6) == atoi(n6))
		pass++;
	else
		printf("mine: %d, their: %d\n", ft_atoi(n6), atoi(n6));
	if (ft_atoi(n8) == atoi(n8))
		pass++;
	else
		printf("mine: %d, their: %d\n", ft_atoi(n8), atoi(n8));
	if (ft_atoi(n9) == atoi(n9))
		pass++;
	else
		printf("mine: %d, their: %d\n", ft_atoi(n9), atoi(n9));
	if (ft_atoi(n10) == atoi(n10))
		pass++;
	else
		printf("mine: %d, their: %d\n", ft_atoi(n10), atoi(n10));
	printf("ft_atoi: %d/9 tests passed\n", pass);
}