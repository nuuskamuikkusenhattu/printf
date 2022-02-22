/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:57:47 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/07 17:40:45 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
int	same_sideof_zero1(int a, int b)
{
	if ((a > 0 && b > 0) || (a < 0 && b < 0) || (a == 0 && b == 0))
		return (1);
	return (0);	
}

void test_strncmp(void)
{
	int i;
	
	i = 0;
	if (same_sideof_zero1(ft_strncmp("salut", "salut", 5), strncmp("salut", "salut", 5)) == 1)
		i++;
	if (same_sideof_zero1(ft_strncmp("test", "testss", 5), strncmp("test", "testss", 5)) == 1)
		i++;
	if (same_sideof_zero1(ft_strncmp("testss", "tests", 5), strncmp("testss", "tests", 5)) == 1)
		i++;
	if (same_sideof_zero1(ft_strncmp("test", "tEst", 4), strncmp("test", "tEst", 4)) == 1)
		i++;
	if (same_sideof_zero1(ft_strncmp("", "test", 4), strncmp("", "test", 4)) == 1)
		i++;
	if (same_sideof_zero1(ft_strncmp("test", "", 4), strncmp("test", "", 4)) == 1)
		i++;
	if (same_sideof_zero1(ft_strncmp("test\200", "test\0", 4), strncmp("test\200", "test\0", 4)) == 1)
		i++;
	printf("ft_strncmp: %d/7 tests passed.\n", i);
}
