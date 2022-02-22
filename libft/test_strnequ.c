/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnequ.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:41:54 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/10 21:59:51 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *str1 = "moimoi";
	char *str2 = "moihei";
	
	printf("1/0: %d", ft_strnequ(str1, str2, 3));
	return (0);
}