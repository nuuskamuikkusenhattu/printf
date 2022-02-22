/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strclr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:28:50 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/10 22:36:32 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *str1 = "vaapukkamehu";
	char *str2 = "";

	printf("%s (len: %d)\n", str1, ft_strlen(str1));
	printf("%s (len: %d)\n", str2, ft_strlen(str2));
	ft_strclr(str1);
	ft_strclr(str2);
	printf("(len: %d)\n", ft_strlen(str1));
	printf("(len: %d)\n", ft_strlen(str2));

}
