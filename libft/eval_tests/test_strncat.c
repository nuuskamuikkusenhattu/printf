/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:53:18 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/03 13:32:04 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void test_strncat(void)
{
	char dest[50] = "taalta";
	const char *src1 = " tahan";
	const char *src2 = "";
	const char *src3 = "\0";
	int i = 0;
	if (ft_strncat(dest, src1, 10) ==  strncat(dest, src1, 10))
		i++;
	else
		printf("testcase 1 failed.\n");
	if (ft_strncat(dest, src2, 3) ==  strncat(dest, src2, 3))
		i++;
	else
		printf("testcase 2 failed.\n");
	if (ft_strncat(dest, src3, 1) ==  strncat(dest, src3, 1))
		i++;
	else
		printf("testcase 2 failed.\n");
	char dest2[50] = "\0";
	if (ft_strncat(dest2, src1, 1) ==  strncat(dest2, src1, 1))
		i++;
	else
		printf("testcase 2 failed.\n");
	printf("ft_strncat: %d/4 tests passed.\n", i);
}
