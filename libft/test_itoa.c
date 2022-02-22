/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:25:41 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/29 13:30:23 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void test_itoa(void)
{
	int i = 54321;
	int j = 1011314754;
	int k = 1;
	int l = -1;
	int m = 42;
	int n = -42;
	int z = 0;
	int min = -2147483648;
	int max = 2147483647;
	int test_passed = 0;
	
	if (strcmp(ft_itoa(i), "54321") == 0)
		test_passed++;
	else
		printf("%d didnt pass the the test.\n", i);
	if (strcmp(ft_itoa(j), "1011314754") == 0)
		test_passed++;
	else
		printf("%d didnt pass the the test.\n", j);
	if (strcmp(ft_itoa(k), "1") == 0)
		test_passed++;
	else
		printf("%d didnt pass the the test.\n", k);
	if (strcmp(ft_itoa(l), "-1") == 0)
		test_passed++;
	else
		printf("%d didnt pass the the test.\n", l);
	if (strcmp(ft_itoa(m), "42") == 0)
		test_passed++;
	else
		printf("%d didnt pass the the test.\n", m);
	if (strcmp(ft_itoa(n), "-42") == 0)
		test_passed++;
	else
		printf("%d didnt pass the the test.\n", n);
	if (strcmp(ft_itoa(z), "0") == 0)
		test_passed++;
	else
		printf("%d didnt pass the the test.\n", z);
	if (strcmp(ft_itoa(min), "-2147483648") == 0)
		test_passed++;
	else
		printf("%d didnt pass the the test.\n", min);
	if (strcmp(ft_itoa(max), "2147483647") == 0)
		test_passed++;
	else
		printf("%d didnt pass the the test.\n", max);
	printf("ft_itoa: tests passed: %d/9\n", test_passed);
}
