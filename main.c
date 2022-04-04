/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:29:13 by spuustin          #+#    #+#             */
/*   Updated: 2022/04/04 16:19:23 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>


static void string_test()
{
	char *str1 = "vaapukka";
	char *str2 = "mehu";
	int ret1, ret2;
	ret1 = printf("printing a string from pointer: %s\n", str1);
	ret2 = ft_printf("printing a string from pointer: %s\n", str1);
	printf("%d %d\n", ret1, ret2);
	ret1 = printf("printing null: %s\n", NULL);
	ret2 = ft_printf("printing null: %s\n", NULL);
	printf("%d %d\n", ret1, ret2);
	ret1 = printf("printing two strings: %s%s\n", str1, str2);
	ret2 = ft_printf("printing two strings: %s%s\n", str1, str2);
	printf("%d %d\n", ret1, ret2);
}
static void char_test()
{
	char a = 'a';
	char b = 'b';
	int ret1, ret2;
	ret1 = printf("%c\n", a);
	ret2 = ft_printf("%c\n", a);
	printf("%d %d\n", ret1, ret2);
	ret1 = printf("printing two chars: %c %c\n", a, b);
	ret2 = ft_printf("printing two chars: %c %c\n", a, b);
	printf("%d %d\n", ret1, ret2);
}

static void d_test()
{
	int n = 42;
	int m = -42;
	int ret1, ret2;
	ret1 = printf("%d\n", n);
	ret2 = ft_printf("%d\n", n);
	printf("%d %d\n", ret1, ret2);
	ret1 = printf("%d %d %d\n", 42242, -2442424, 0);
	ret2 = printf("%d %d %d\n", 42242, -2442424, 0);
	printf("%d %d\n", ret1, ret2);
}

static void i_test()
{
	int n = 42;
	int m = -42;
	int ret1, ret2;
	ret1 = printf("%i\n", n);
	ret2 = ft_printf("%i\n", n);
	printf("%d %d\n", ret1, ret2);
	ret1 = printf("%i %i %i\n", 42242, -2442424, 0);
	ret2 = printf("%i %i %i\n", 42242, -2442424, 0);
	printf("%d %d\n", ret1, ret2);
}

static void o_test()
{
	int n = 42;
	int m = -42;
	int ret1, ret2;
	ret1 = printf("%o\n", n);
	ret2 = ft_printf("%o\n", n);
	printf("%d %d\n", ret1, ret2);
	ret1 = printf("%o %o %o\n", 42242, -2442424, 0);
	ret2 = printf("%o %o %o\n", 42242, -2442424, 0);
	printf("%d %d\n", ret1, ret2);
}

static void x_test()
{
	int n = 42;
	int m = -42;
	int ret1, ret2;
	ret1 = printf("%x\n", n);
	ret2 = ft_printf("%x\n", n);
	printf("%d %d\n", ret1, ret2);
	ret1 = printf("%x %x %x\n", 42242, -2442424, 0);
	ret2 = printf("%x %x %x\n", 42242, -2442424, 0);
	printf("%d %d\n", ret1, ret2);
}

static void X_test()
{
	int n = 42;
	int m = -42;
	int ret1, ret2;
	ret1 = printf("%X\n", n);
	ret2 = ft_printf("%X\n", n);
	printf("%d %d\n", ret1, ret2);
	ret1 = printf("%X %X %X\n", 42242, -2442424, 0);
	ret2 = printf("%X %X %X\n", 42242, -2442424, 0);
	printf("%d %d\n", ret1, ret2);
}
static void percent_test()
{
	int ret1, ret2;
	ret1 = printf("%%\n");
	ret2 = ft_printf("%%\n");
	printf("%d %d\n", ret1, ret2);
}
static void ellas_tests()
{
	int ret1,ret2;

	ret1 = printf("%ld\n", 922337203685477580);
	ret2 = ft_printf("%ld\n", 922337203685477580);
	printf("%d %d\n", ret1, ret2);
	
	ret1 = printf("%lld\n", -922337203685477580);
	ret2 = ft_printf("%lld\n", -922337203685477580);
	printf("%d %d\n", ret1, ret2);
	
	ret1 = printf("%-015.8d\n", 1000000);
	ret2 = ft_printf("%-015.8d\n", 1000000);
	printf("%d %d\n", ret1, ret2);
	ret1 = printf("%.d %.0d\n", 42, 43);
	ret2 = ft_printf("%.d %.0d\n", 42, 43);
	printf("%d %d\n", ret1, ret2);
	ret1 = printf("%.d %.0d\n", 0, 0);
	ret2 = ft_printf("%.d %.0d\n", 0, 0);
	printf("%d %d\n", ret1, ret2);


	ret1 = printf("'%%#-10.10' '%#-10.10o' '%-10.10u' '%#-10.10x' '%#-10.10X'\n", 392082, 392082, 392082, 392082);
	ret2 = ft_printf("'%%#-10.10' '%#-10.10o' '%-10.10u' '%#-10.10x' '%#-10.10X'\n", 392082, 392082, 392082, 392082);
	printf("%d %d\n", ret1, ret2);
	ret1 = printf("'%%#-10.10' '%#-17.17o' '%-17.17u' '%#-17.11x' '%#-17.11X'\n", 392082, 392082, 392082, 392082);
	ret2 = ft_printf("'%%#-10.10' '%#-17.17o' '%-17.17u' '%#-17.11x' '%#-17.11X'\n", 392082, 392082, 392082, 392082);
	printf("%d %d\n", ret1, ret2);
	ret1 = printf("'%%#-10.10' '%#-17.17o' '%-17.17u' '%#-11.17x' '%#-11.17X'\n", 392082, 392082, 392082, 392082);
	ret2 = ft_printf("'%%#-10.10' '%#-17.17o' '%-17.17u' '%#-11.17x' '%#-11.17X'\n", 392082, 392082, 392082, 392082);
	printf("%d %d\n", ret1, ret2);

	
	ret1 = printf("'%%.' '%.o' '%.u' '%.x' '%.X'\n", 0, 0, 0, 0);
	ret2 = ft_printf("'%%.' '%.o' '%.u' '%.x' '%.X'\n", 0, 0, 0, 0);
	printf("%d %d\n", ret1, ret2);
	ret1 = printf("'%%.' '%.o' '%.u' '%.x' '%.X'\n", 392082, 392082, 392082, 392082);
	ret2 = ft_printf("'%%.' '%.o' '%.u' '%.x' '%.X'\n", 392082, 392082, 392082, 392082);
	printf("%d %d\n", ret1, ret2);
	ret1 = printf("%5.x %5.0x\n", 0, 0);
	ret2 = ft_printf("%5.x %5.0x\n", 0, 0);
	printf("%d %d\n", ret1, ret2);
	ret1 = printf("%.x %.0x\n", 0, 0);
	ret2 = ft_printf("%.x %.0x\n", 0, 0);
	printf("%d %d\n", ret1, ret2);
	ft_printf("%5.x %5.0x\n", 0, 0);
	ret1 = printf("%\n");
	ret2 = ft_printf("%\n");
	printf("%d %d\n", ret1, ret2);
	ret1 = printf("%%\n");
	ret2 = ft_printf("%%\n");
	printf("%d %d\n", ret1, ret2);
	ret1 = printf("%sjeccu\n", NULL);
	ret2 = ft_printf("%sjeccu\n", NULL);
	printf("%d %d\n", ret1, ret2);
	ft_printf("%d %d\n", ret1, ret2);
	ret1 = printf("%.5s\n", NULL);
	ret2 = ft_printf("%.5s\n", NULL);
	printf("%d %d\n", ret1, ret2);
	ret1 = printf("%s\n", NULL);
	ret2 = ft_printf("%s\n", NULL);
	printf("%d %d\n", ret1, ret2);
}
void	float_test()
{
	ft_printf("%.15f\n", 3.141593);
	ft_printf("%#f %#.f\n", (double)-56.2012685, (double)-56.2012685);
}

int main(void)
{
	//string_test();
	//char_test();
	//d_test();
	//i_test();
	//o_test();
	//x_test();
	//X_test();
	//percent_test();
	ellas_tests();
	//float_test();
	return (0);
}
