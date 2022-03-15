/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:29:13 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/15 20:28:42 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

static void test_itoabase()
{
	ft_putstr("mine: ");
	ft_putstr(ft_itoabase(150,16));
	printf(", orig: %x\n", 150);
	ft_putstr("mine: ");
	ft_putstr(ft_itoabase(-150,16));
	printf(", orig: %x\n", -150);
	ft_putstr("mine: ");
	ft_putstr(ft_itoabase(150,8));
	printf(", orig: %o\n", 150);
	ft_putstr("mine: ");
	ft_putstr(ft_itoabase(-150,8));
	printf(", orig: %o\n", -150);
}

int main(void)
{
	test_itoabase();
	return (0);
}
