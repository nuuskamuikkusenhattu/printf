/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:31:42 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/01 12:18:03 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void test_strdup(void)
{
	char *src1 = "";
	char *src2 = "tuo ei kylla ollut pelkkaa vaapukkamehua.";
	char *src3 = "\0";
	int passed = 0;
	if (strcmp(ft_strdup(src1), strdup(src1)) == 0)
		passed++;
	else
		printf("returned: %s\nexpected: %s", ft_strdup(src1), strdup(src1));
	if (strcmp(ft_strdup(src2), strdup(src2)) == 0)
		passed++;
	else
		printf("returned: %s\nexpected: %s", ft_strdup(src2), strdup(src2));
	if (strcmp(ft_strdup(src3), strdup(src3)) == 0)
		passed++;
	else
		printf("returned: %s\nexpected: %s", ft_strdup(src3), strdup(src3));
	printf("ft_strdup: %d/3 tests passed\n", passed);
}
