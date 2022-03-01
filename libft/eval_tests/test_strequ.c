/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:10:08 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/25 17:07:34 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char const *str1 = "test";
	char const *str2 = "tests";
	char const *str3 = "	";
	char const *str4 = "	";
	char const *str5 = "LETS!A!GO";
	char const *str6 = "LETS!A!GO";

	printf("mine: %d\n", ft_strequ(str1, str2));
	//printf("mine: %d\n", ft_strequ(str3, str4));
	//printf("mine: %d\n", ft_strequ(str5, str6));
	return (0);
}