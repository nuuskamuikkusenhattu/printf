/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:40:23 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/22 18:35:04 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int main(void)
{
	char *str1 = "lets*fucking****GOOO";
	char *str2 = "***nuudelikeittoa**ja****vaapukkamehua***";
	char *str3 = "***bottomblock";
	char *str4 = "topblock***";
	char *str5 = "      split       this for   me  !        ";
	char c = ' ';
	char **arr;
	int i = 0;
	arr = ft_strsplit(str5, c);
	
	while (arr[i] != NULL)
	{
		printf("%s, %i\n", arr[i], ft_strlen(arr[i]));
		i++;
	}
	return (0);
}
