/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:29:13 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/31 16:10:43 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

static void test_itoabase()
{
	ft_putstr("mine: ");
	ft_putstr(printf_u_itoabase(150,16,0));
	printf(", orig: %x\n", 150);
	ft_putstr("mine: ");
	ft_putstr(printf_u_itoabase(-150,16,0));
	printf(", orig: %x\n", -150);
	ft_putstr("mine: ");
	ft_putstr(printf_u_itoabase(150,8,0));
	printf(", orig: %o\n", 150);
	ft_putstr("mine: ");
	ft_putstr(printf_u_itoabase(-150,8,0));
	printf(", orig: %o\n", -150);
	printf("\n%.5i\n", 15);
	ft_putstr(printf_s_itoabase(15,10,5));
	printf("\n%.5i\n", -15);
	ft_putstr(printf_s_itoabase(-15,10,5));
}

static void itoabase_width()
{
	printf("%5x\n", 16);
	printf("%-5x\n", 16);
}
static void itoabase_precision()
{
	printf("%.5d\n", 8);
	ft_putstr(printf_u_itoabase(8,10,5));
	printf("\n%.5x\n", 17);
	ft_putstr(printf_u_itoabase(17,16,5));
	printf("\n%.*o\n", 17, 17);
	ft_putstr(printf_u_itoabase(17,8,17));
}

static void test_width()
{
	//printf("%-015.8d\n", 1000000);
	printf("%-15.8d\n", 1000000);
	printf("%15.8d\n", 1000000);
}

static void test_pointers()
{
	char *str = "vaapukka";
	printf("%p\n", str);
	printf("%p\n", NULL);
}
int main(void)
{
	test_itoabase();
	//itoabase_width();
	//itoabase_precision();
	//printf("%.300d", 50);
	//test_width();
	//double d = 123.123456789123456789123456789;
	//test_pointers();

	return (0);
}
