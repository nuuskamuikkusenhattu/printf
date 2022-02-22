/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:45:53 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/16 12:50:01 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *s1 = "tuo ei kylla ollut ";
	char *s2 = "pelkkaa vaapukkamehua";
	char *s3 = "";
	char *s4 = NULL;

	printf("%s\n", ft_strjoin(s1, s2));
	printf("%s\n", ft_strjoin(s2, s3));
	printf("%s\n", ft_strjoin(s3, s3));
	printf("%s\n", ft_strjoin(s2, s2));
	return (0);
}
