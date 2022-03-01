/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_alnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:32:16 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/05 15:47:57 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = '5';
	char b = 'Q';
	char c = 'l';
	char d = '+';

	printf("mine: %d, their: %d\n", ft_isalnum(a), isalnum(a));
	printf("mine: %d, their: %d\n", ft_isalnum(b), isalnum(b));
	printf("mine: %d, their: %d\n", ft_isalnum(c), isalnum(c));
	printf("mine: %d, their: %d\n", ft_isalnum(d), isalnum(d));
	return (0);
}
