/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:39:49 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/02 13:13:32 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void test_memmove(void)
{
	char src[] = "tuo ei kylla ollut pelkkaa vaapukkamehua";
	char *dest;
	int i = 0;
	
	dest = src + 1;
	if (dest == ft_memmove(dest, "diipadaapa", 5))
		i++;
	else
		printf("testcase 1 didnt work.\n");
	dest = src + 1;
	if (dest == ft_memmove(dest, "dii\0pada\0apa", 10))
		i++;
	else
		printf("testcase 2 didnt work.\n");
	dest = src + 1;
	if (dest == ft_memmove(dest, src, 8))
		i++;
	else
		printf("testcase 3 didnt work.\n");
	dest = src + 1;
	if (src == ft_memmove(src, dest, 8))
		i++;
	else
		printf("testcase 4 didnt work.\n");
	dest = src + 1;
	if (src == ft_memmove(src, dest, 0))
		i++;
	else
		printf("testcase 5 didnt work.\n");
	printf("ft_memmove: %d/5 tests passed.\n", i);
}
