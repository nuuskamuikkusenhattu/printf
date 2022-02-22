/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:27:08 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/01 12:35:32 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	same_sideof_zero(int a, int b)
{
	if ((a > 0 && b > 0) || (a < 0 && b < 0) || (a == 0 && b == 0))
		return (1);
	return (0);	
}

void test_strcmp(void)
{
	int i;
	
	i = 0;
	if (same_sideof_zero(ft_strcmp("salut", "salut"), strcmp("salut", "salut")) == 1)
		i++;
	if (same_sideof_zero(ft_strcmp("test", "testss"), strcmp("test", "testss")) == 1)
		i++;
	if (same_sideof_zero(ft_strcmp("testss", "tests"), strcmp("testss", "tests")) == 1)
		i++;
	if (same_sideof_zero(ft_strcmp("test", "tEst"), strcmp("test", "tEst")) == 1)
		i++;
	if (same_sideof_zero(ft_strcmp("", "test"), strcmp("", "test")) == 1)
		i++;
	if (same_sideof_zero(ft_strcmp("test", ""), strcmp("test", "")) == 1)
		i++;
	if (same_sideof_zero(ft_strcmp("test\200", "test\0"), strcmp("test\200", "test\0")) == 1)
		i++;
	printf("ft_strcmp: %d/7 tests passed.\n", i);
}
