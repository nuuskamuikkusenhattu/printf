/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:29:13 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/23 14:44:49 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

// static void test_itoabase()
// {
// 	ft_putstr("mine: ");
// 	ft_putstr(printf_itoabase(150,16));
// 	printf(", orig: %x\n", 150);
// 	ft_putstr("mine: ");
// 	ft_putstr(printf_itoabase(-150,16));
// 	printf(", orig: %x\n", -150);
// 	ft_putstr("mine: ");
// 	ft_putstr(printf_itoabase(150,8));
// 	printf(", orig: %o\n", 150);
// 	ft_putstr("mine: ");
// 	ft_putstr(printf_itoabase(-150,8));
// 	printf(", orig: %o\n", -150);
// }
static void test_width()
{
	//printf("%-015.8d\n", 1000000);
	printf("%-15.8d\n", 1000000);
	printf("%15.8d\n", 1000000);
}

int main(void)
{
	//test_itoabase();
	//printf("%.300d", 50);
	test_width();
	//double d = 123.123456789123456789123456789;
	return (0);
}
