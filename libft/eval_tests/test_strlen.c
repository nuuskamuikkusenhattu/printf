/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:08:43 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/29 17:55:41 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void test_strlen(void)
{
	size_t total = 0;
	
	if (ft_strlen("") == 0)
		total ++;
	if (ft_strlen(".") == 1)
		total ++;
	if (ft_strlen("HALOO") == 5)
		total ++;
	if (ft_strlen("HELLO	HELLO") == 11)
		total ++;
	if (ft_strlen("\n\n\t\t\0") == 4)
		total ++;
	printf("ft_strlen: %zu/5 tests pass\n", total);
	
}
