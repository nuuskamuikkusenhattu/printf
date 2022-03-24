/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:27:41 by spuustin          #+#    #+#             */
/*   Updated: 2022/02/28 14:39:33 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	multi_arg(int count, ...)
{
	va_list list;
	int i = 0;
	
	va_start(list, count);
	while (i < count)
	{
		printf("%d", va_arg(list, int));
		i++;
	}
	va_end(list);
	return (0);
}

int main(void)
{
	int i = 42;

	printf("%d %ld\n", i, 100L); //int ja long
	printf("%10d\n", i); // tayttaa 10lla spacella
	printf("%010d\n", i); // tayttaa 10lla nollalla
	printf("%d %x %o %#x %#o \n", 100, 100, 100, 100, 100); //emt
	printf("%4.3f\n", 3.1416); //float, 3 desimaalin tarkkuus
	printf("%+.0e\n", 3.1416);
	printf("%E\n", 3.1416);
	printf("%*d \n", 3, 10); //eka nro maarittaa minimileveyden
	printf("%%");
	return (0);
}