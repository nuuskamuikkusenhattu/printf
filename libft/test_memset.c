/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:02:01 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/01 12:31:07 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void test_memset(void)
{
	void *str;
	int i = 0;

	str = malloc(sizeof(*str) * 16);
	if (str)
	{
		memset(str, 'c', 5);
		if (str != ft_memset(str, 'c', 5))
			printf("case 1 failed.\n");
		else
			i++;
		memset(str, 'c', 15);
		if (str != ft_memset(str, 'c', 15))
			printf("case 1 failed.\n");
		else
			i++;
		memset(str, '\n', 6);
		if (str != ft_memset(str, '\n', 6))
			printf("case 1 failed.\n");
		else
			i++;
		memset(str, '\0', 1);
		if (str != ft_memset(str, '\0', 1))
			printf("case 1 failed.\n");
		else
			i++;
	}
	
	printf("ft_memset: %d/4 tests passed.\n", i);
}