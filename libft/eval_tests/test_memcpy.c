/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:49:18 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/01 13:02:32 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"
void test_memcpy(void)
{
	void *temp;
	int i= 0;
	temp = malloc(sizeof(*temp) * 30);
if (temp)
{
	memset(temp, 'c', 30);
	if (temp == ft_memcpy(temp, "abcdefghijklmn", 8))
			i++;
		else
			printf("memcpy didnt work in case 1");
	memset(temp, ' ', 10);
	if (temp == ft_memcpy(temp, "asdasdasdad", 5))
			i++;
		else
			printf("memcpy didnt work in case 2");
	memset(temp, '\0', 5);
	if (temp == ft_memcpy(temp, "", 1))
			i++;
		else
			printf("memcpy didnt work in case 3");
	printf("ft_memcpy: %d/3 tests passed.\n", i);

}
}
