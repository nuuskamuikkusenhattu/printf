/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:27:13 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/01 12:46:34 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>
#include <stdio.h>

void test_bzero(void)
{
	void *str1;
	void *str2;
	str1 = malloc(sizeof( *str1) * 5);
	str2 = malloc(sizeof( *str1) * 5);
	memset(str1, 'a', 5);
	memset(str2, 'a', 5);
	ft_bzero(str1, 5);
	bzero(str2, 5);
	if (memcmp(str1, str2, 5) == 0)
		printf("ft_bzero: OK!\n");
	else
		printf("ft_ bzero fails test-case.\n");
}