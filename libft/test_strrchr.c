/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:19:22 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/07 17:24:16 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void test_strrchr(void)
{
	char	*str1 = "vaapukkamehu";
	char	*str2 = "\0\0\0\0\0";
	int		c1 = 'm';
	int		c2 = '\0';
	int i = 0;
	if(strrchr(str1, c1) == ft_strrchr(str1, c1))
		i++;
	else
		printf("testcase 1 failed.\n");
	if(strrchr(str1, c2) == ft_strrchr(str1, c2))
		i++;
	else
		printf("testcase 2 failed.\n");
	if(strrchr(str2, c1) == ft_strrchr(str2, c1))
		i++;
	else
		printf("testcase 3 failed.\n");
	if (strrchr(str1, c2) == ft_strrchr(str1, c2))
		i++;
	else
		printf("testcase 4 failed.\n");
	printf("ft_strrchr: %d/4 tests passed.\n", i);
}
