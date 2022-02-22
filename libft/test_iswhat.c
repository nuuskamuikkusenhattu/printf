/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_iswhat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:37:01 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/08 13:48:51 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void test_iswhat(void)
{
	int alpha = 0;
	int digit = 0;
	int ascii = 0;
	int print = 0;
	int alnum = 0;
	char a = 'a';
	char b = 'Z';
	char c = ' ';
	char d = '\t';
	char e = '\0';
	char f = '%';
	
	if (ft_isalpha(a) == isalpha(a))
		alpha++;
	if (ft_isalpha(b) == isalpha(b))
		alpha++;
	if (ft_isalpha(c) == isalpha(c))
		alpha++;
	if (ft_isalpha(d) == isalpha(d))
		alpha++;
	if (ft_isalpha(e) == isalpha(e))
		alpha++;
	if (ft_isalpha(f) == isalpha(f))
		alpha++;
	
	if (ft_isdigit(a) == isdigit(a))
		digit++;
	if (ft_isdigit(b) == isdigit(b))
		digit++;
	if (ft_isdigit(c) == isdigit(c))
		digit++;
	if (ft_isdigit(d) == isdigit(d))
		digit++;
	if (ft_isdigit(e) == isdigit(e))
		digit++;
	if (ft_isdigit(f) == isdigit(f))
		digit++;
	
	if (ft_isascii(a) == isascii(a))
		ascii++;
	if (ft_isascii(b) == isascii(b))
		ascii++;
	if (ft_isascii(c) == isascii(c))
		ascii++;
	if (ft_isascii(d) == isascii(d))
		ascii++;
	if (ft_isascii(e) == isascii(e))
		ascii++;
	if (ft_isascii(f) == isascii(f))
		ascii++;
	
	if (ft_isprint(a) == isprint(a))
		print++;
	if (ft_isprint(b) == isprint(b))
		print++;
	if (ft_isprint(c) == isprint(c))
		print++;
	if (ft_isprint(d) == isprint(d))
		print++;
	if (ft_isprint(e) == isprint(e))
		print++;
	if (ft_isprint(f) == isprint(f))
		print++;
	
	if (ft_isalnum(a) == isalnum(a))
		alnum++;
	if (ft_isalnum(b) == isalnum(b))
		alnum++;
	if (ft_isalnum(c) == isalnum(c))
		alnum++;
	if (ft_isalnum(d) == isalnum(d))
		alnum++;
	if (ft_isalnum(e) == isalnum(e))
		alnum++;
	if (ft_isalnum(f) == isalnum(f))
		alnum++;
	printf("ft_isalpha: %d/6 tests passed.\n", alpha);
	printf("ft_isdigit: %d/6 tests passed.\n", digit);
	printf("ft_isalnum: %d/6 tests passed.\n", alnum);
	printf("ft_isascii: %d/6 tests passed.\n", ascii);
	printf("ft_isprint: %d/6 tests passed.\n", print);
}
