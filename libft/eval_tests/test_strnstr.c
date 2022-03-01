/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:19:13 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/07 17:35:40 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void test_strnstr(void)
{
	const char *neula1 = "ylla";
	const char *neula2 = "tuo";
	const char *neula3 = "ei";
	const char *heinasuopa = "tuo ei kylla ollut pelkkaa vaapukkamehua, ei ollut ei";
	int i = 0;

	if (strnstr(heinasuopa, neula1, 10) == ft_strnstr(heinasuopa, neula1, 10))
		i++;
	else
		printf("testcase 1 failed.\n");
	if (strnstr(heinasuopa, neula2, 5) == ft_strnstr(heinasuopa, neula2, 5))
		i++;
	else
		printf("testcase 2 failed.\n");
	if (strnstr(heinasuopa, neula3, 25) == ft_strnstr(heinasuopa, neula3, 25))
		i++;
	else
		printf("testcase 3 failed.\n");
	if (strnstr(heinasuopa, "", 1) == ft_strnstr(heinasuopa, "", 1))
		i++;
	else
		printf("testcase 4 failed.\n");
	if (strnstr(heinasuopa, "\0", 1) == ft_strnstr(heinasuopa, "\0", 1))
		i++;
	else
		printf("testcase 5 failed.\n");
	if (strnstr(heinasuopa, "hehee", 30) == ft_strnstr(heinasuopa, "hehee", 30))
		i++;
	else
		printf("testcase 6 failed.\n");
	printf("ft_strnstr: %d/6 tests passed.\n", i);
}
