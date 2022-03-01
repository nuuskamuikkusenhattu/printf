/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:49:52 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/17 17:36:53 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *str1 = ft_strnew(10);
	char str2[10] = {'\0'};
	ft_putnbr(memcmp(str1, str2, 10));
	free(str1);
	if ((str1 = ft_strnew(-1)) == NULL)
		ft_putchar('K');
	return (0);
}
