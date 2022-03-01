/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_towhat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:37:01 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/08 13:54:34 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void test_towhat(void)
{
	int lower = 0;
	int upper = 0;
	char a = 'a';
	char b = 'B';
	char c = ' ';
	char d = '\0';
	char e = '%';
	char f = '4';

	if (ft_toupper(a) == toupper(a))
		upper++;
	if (ft_toupper(b) == toupper(b))
		upper++;
	if (ft_toupper(c) == toupper(c))
		upper++;
	if (ft_toupper(d) == toupper(d))
		upper++;
	if (ft_toupper(e) == toupper(e))
		upper++;
	if (ft_toupper(f) == toupper(f))
		upper++;
	
	if (ft_tolower(a) == tolower(a))
		lower++;
	if (ft_tolower(b) == tolower(b))
		lower++;
	if (ft_tolower(c) == tolower(c))
		lower++;
	if (ft_tolower(d) == tolower(d))
		lower++;
	if (ft_tolower(e) == tolower(e))
		lower++;
	if (ft_tolower(f) == tolower(f))
		lower++;
	
	printf("ft_toupper: %d/6 tests passed.\n", upper);
	printf("ft_tolower: %d/6 tests passed.\n", lower);
}
