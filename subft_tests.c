/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subft_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:53:38 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/23 20:05:31 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void printstr_test(const char *str, ...)
{
	t_build *b = (t_build *) malloc(sizeof(t_build));
	new_build(b);
	va_list l;
	va_start(l, str);
	print_string(b, str, l);
	va_end(l);
}

int main(void)
{
	const char *str = "vaapukka";
	printstr_test(str);
	return (0);
}