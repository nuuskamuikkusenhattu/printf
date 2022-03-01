/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:18:27 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/03 13:37:34 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void test_strlcat(void)
{
	char dest[50] = "taalta";
	const char *src1 = " tahan";
	const char *src2 = "";
	const char *src3 = "\0";
	int i = 0;
	if (ft_strlcat(dest, src1, 6) ==  strlcat(dest, src1, 6))
		i++;
	else
		printf("testcase 1 failed.\n");
	if (ft_strlcat(dest, src2, 3) ==  strlcat(dest, src2, 3))
		i++;
	else
		printf("testcase 2 failed.\n");
	if (ft_strlcat(dest, src3, 1) ==  strlcat(dest, src3, 1))
		i++;
	else
		printf("testcase 3 failed.\n");
	char dest2[50] = "\0";
	if (ft_strlcat(dest2, src1, 1) ==  strlcat(dest2, src1, 1))
		i++;
	else
		printf("testcase 4 failed.\n");
	printf("ft_strlcat: %d/4 tests passed.\n", i);
}
