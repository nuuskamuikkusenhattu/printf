/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_unit_tests.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:24:00 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/24 20:15:37 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void set_build(t_build *b, char m, int w, char f)
{
	b->minus = m;
	b->width = w;
	b->print_count = 0;
	b->fill = f;
}

void test_chars()
{
	t_build *t1;
	t_build *t2;
	t1 = (t_build *)malloc(sizeof(*t1));
	t2 = (t_build *)malloc(sizeof(*t2));
	if (!t1 || !t2)
		printf("malloc failed.\n");
	set_build(t1, '-', 5, ' ');
	set_build(t2, 0, 5, ' ');
	print_char('x', t1);
	write(1,"\n", 1);
	print_char('x', t2);
	write(1,"\n", 1);
	//printf("\nret: %d and %d\n", t1->print_count, t2->print_count);
	printf("%-5c\n", 'x');
	printf("%05c\n", 'x');
}

void test_strings()
{
	t_build *t1;
	t_build *t2;
	char *str1 = "karski";
	char *str2 = "jarskiparski";
	t1 = (t_build *)malloc(sizeof(*t1));
	t2 = (t_build *)malloc(sizeof(*t2));
	if (!t1 || !t2)
		printf("malloc failed.\n");
	set_build(t1, '-', 10, ' ');
	set_build(t2, 0, 10, ' ');
	print_string(t1, str1);
	write(1, "\n", 1);
	print_string(t2, str1);
	write(1, "\n", 1);
	printf("%-10s\n", str1);
	printf("%10s\n", str1);
	print_string(t1, str2);
	write(1, "\n", 1);
	print_string(t2, str2);
	write(1, "\n", 1);
	printf("%-10s\n", str2);
	printf("%10s\n", str2);
	printf("setting the fill to be 0\n");
	set_build(t1, '-', 10, '0');
	set_build(t2, 0, 10, '0');
	print_string(t1, str1);
	write(1, "\n", 1);
	print_string(t2, str1);
	write(1, "\n", 1);
	printf("%-010s\n", str1);
	printf("%010s\n", str1);
	print_string(t1, str2);
	write(1, "\n", 1);
	print_string(t2, str2);
	write(1, "\n", 1);
	printf("%-010s\n", str2);
	printf("%010s\n", str2);
}

int main(void)
{
	//test_chars();
	test_strings();
	return (0);
}
