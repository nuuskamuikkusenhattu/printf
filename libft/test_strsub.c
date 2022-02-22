/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:21:47 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/16 12:30:55 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *str = "tuo ei kylla ollut pelkkaa vaapukkamehua";
	char *empty = "";
	printf("%s\n", ft_strsub(str, 19, 21));
	printf("%s\n", ft_strsub(str, 25, 21));
	printf("%s\n", ft_strsub(str, 0, 3));
	printf("%s\n", ft_strsub(empty, 19, 21));
	printf("%s\n", ft_strsub(empty, 0, 1));
	printf("%s\n", ft_strsub(empty, 0, 0));
}
