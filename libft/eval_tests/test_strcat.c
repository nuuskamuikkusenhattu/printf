/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:20:22 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/03 13:28:17 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void test_strcat(void)
{
	char dest[50] = "taalta";
	const char *src1 = " tahan";
	const char *src2 = "";
	const char *src3 = "\0";
	int i = 0;
	if (ft_strcat(dest, src1) ==  strcat(dest, src1))
		i++;
	else
		printf("testcase 1 failed.\n");
	if (ft_strcat(dest, src2) ==  strcat(dest, src2))
		i++;
	else
		printf("testcase 2 failed.\n");
	if (ft_strcat(dest, src3) ==  strcat(dest, src3))
		i++;
	else
		printf("testcase 2 failed.\n");
	char dest2[50] = "\0";
	if (ft_strcat(dest2, src1) ==  strcat(dest2, src1))
		i++;
	else
		printf("testcase 2 failed.\n");
	printf("ft_strcat: %d/4 tests passed.\n", i);
}
