/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:39:56 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/01 15:50:22 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void test_memccpy(void)
{
	char dst1[50] = "I FUGGIN LOVE THISHEHEH";
	char *src1 = "vaapukkamehu";
	char dst2[50] = "";
	char *src2 = "vaapukkamehu";
	int c = 'p';
	int i = 0;
	
	char *result1 = ft_memccpy(dst1, src1, c, 5);
	char *result2 = memccpy(dst1, src1, c, 5);
	char *result3 = ft_memccpy(dst2, src2, c, 5);
	char *result4 = memccpy(dst2, src2, c, 5);

	if (memcmp(result1, result2, 5) == 0)
		i++;
	if (memcmp(result3, result4, 5) == 0)
		i++;
	printf("ft_memccpy: %i/2 tests passed.\n", i);
}
