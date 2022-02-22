/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:47:58 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/07 17:31:47 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void test_strstr(void)
{
	const char *neula1 = "ylla";
	const char *neula2 = "tuo";
	const char *neula3 = "ei";
	const char *heinasuopa = "tuo ei kylla ollut pelkkaa vaapukkamehua, ei ollut ei";
	int i = 0;

	if (strstr(heinasuopa, neula1) == ft_strstr(heinasuopa, neula1))
		i++;
	else
		printf("testcase 1 failed.\n");
	if (strstr(heinasuopa, neula2) == ft_strstr(heinasuopa, neula2))
		i++;
	else
		printf("testcase 2 failed.\n");
	if (strstr(heinasuopa, neula3) == ft_strstr(heinasuopa, neula3))
		i++;
	else
		printf("testcase 3 failed.\n");
		if (strstr(heinasuopa, "") == ft_strstr(heinasuopa, ""))
		i++;
	else
		printf("testcase 4 failed.\n");
	if (strstr(heinasuopa, "\0") == ft_strstr(heinasuopa, "\0"))
		i++;
	else
		printf("testcase 5 failed.\n");
	if (strstr(heinasuopa, "hehee") == ft_strstr(heinasuopa, "hehee"))
		i++;
	else
		printf("testcase 6 failed.\n");
	printf("ft_strstr: %d/6 tests passed.\n", i);
}
