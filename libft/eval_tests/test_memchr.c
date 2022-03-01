/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:52:28 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/02 13:44:50 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void test_memchr(void)
{
	const char *str = "tuo ei kylla ollut pelkkaa vaapukkamehua!";
	const char *result;
	int i = 0;

	result = (ft_memchr(str, 'e', 10));
	if (strcmp(result, str + 4) == 0)
		i++;
	else
		printf("testcase 1 failed\n");
	result = (ft_memchr(str, 'a', 15));
	if (strcmp(result, str + 11) == 0)
		i++;
	else
		printf("testcase 2 failed\n");
	result = (ft_memchr(str, 'x', 25));
	if (result == NULL)
		i++;
	else
		printf("testcase 3 failed\n");
	result = (ft_memchr(str, '\0', 42));
	if (strcmp(result, str + 41) == 0)
		i++;
	else
		printf("testcase 4 failed\n");
	printf("ft_memchr: %d/4 tests passed. \n", i);
}
