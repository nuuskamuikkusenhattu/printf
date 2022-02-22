/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:45:29 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/02 13:51:04 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void test_memcmp(void)
{
	char *str1 = "juolukka";
	char *str2 = "juolukka";
	char *str3 = "puol\0kka";
	char *str4 = "vaapukka";
	int i = 0;
	
	if (ft_memcmp(str1, str2, 8) == memcmp(str1, str2, 8))
		i++;
	else
		printf("mine: %d, orig: %d\n", ft_memcmp(str1, str2, 8), memcmp(str1, str2, 8));
	if (ft_memcmp(str3, str2, 8) == memcmp(str3, str2, 8))
		i++;
	else
		printf("mine: %d, orig: %d\n", ft_memcmp(str3, str2, 8), memcmp(str3, str2, 8));
	if (ft_memcmp(str3, str4, 8) == memcmp(str3, str4, 8))
		i++;
	else
		printf("mine: %d, orig: %d\n", ft_memcmp(str3, str4, 8), memcmp(str3, str4, 8));
	if (ft_memcmp(str4, str3, 8) == memcmp(str4, str3, 8))
		i++;	
	else
		printf("mine: %d, orig: %d\n", ft_memcmp(str4, str3, 8), memcmp(str4, str3, 8));
	printf("ft_memcmp: %d/4 tests passed.\n", i);
}