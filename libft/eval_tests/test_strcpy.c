/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:46:03 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/03 12:58:02 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void test_strcpy(void)
{
	const char *src1 = "COPY THIS";
	const char *src2 = "";
	const char *src3 = "\0";
	const char *src4 = "   	hehe hehe 		...";
	char dest[100];
	int i = 0;
	if (strcmp(ft_strcpy(dest, src1), strcpy(dest, src1)) == 0)
		i++;
	else
		printf("testcase 1 failed.\n");
	if (strcmp(ft_strcpy(dest, src2), strcpy(dest, src2)) == 0)
		i++;
	else
		printf("testcase 2 failed.\n");
	if (strcmp(ft_strcpy(dest, src3), strcpy(dest, src3)) == 0)
		i++;
	else
		printf("testcase 3 failed.\n");
	if (strcmp(ft_strcpy(dest, src4), strcpy(dest, src4)) == 0)
		i++;
	else
		printf("testcase 4 failed.\n");
	printf("ft_strcpy: %d/4 tests passed.\n", i);
}
