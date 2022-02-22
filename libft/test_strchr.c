/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:47:30 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/03 13:41:35 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void test_strchr(void)
{
	char	*str1 = "vaapukkamehu";
	char	*str2 = "\0\0\0\0\0";
	int		c1 = 'm';
	int		c2 = '\0';
	int i = 0;

	if (strchr(str1, c1) == ft_strchr(str1, c1))
		i++;
	else
		printf("testcase 1 failed.\n");
	if(strchr(str1, c2) == ft_strchr(str1, c2))
		i++;
	else
		printf("testcase 2 failed.\n");
	if (strchr(str2, c1) == ft_strchr(str2, c1))
		i++;
	else
		printf("testcase 3 failed.\n");
	if (strchr(str2, c2) == ft_strchr(str2, c2))
		i++;
	else
		printf("testcase 4 failed.\n");
	printf("ft_strchr: %d/4 tests passed:\n", i);
}
