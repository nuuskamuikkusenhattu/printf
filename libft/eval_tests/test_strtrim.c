/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:23:04 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/22 18:08:35 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char const *str1 = " 		 \n	 coding and struggling 			  \n	\n\n 	";
	char const  *str2 = "		 	 	 	 	 		 	";

	printf("%s\n", ft_strtrim(str1));
	printf("%s\n", ft_strtrim(str2));
	printf("str len: %i\n", ft_strlen(ft_strtrim(str2)));
	return (0);
}
