/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:29:13 by spuustin          #+#    #+#             */
/*   Updated: 2022/02/28 16:25:48 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"

int ft_printf(const char * format, ...);

int main()
{
	char *str1 = "vaapukkamehu";
	char *str2 = "juolukkajehu";
	int f = 5;
	int d = 10;
	ft_printf("nums are %d and %d \n", f, d);
   return (0);
}
