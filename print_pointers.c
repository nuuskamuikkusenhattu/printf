/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:38:23 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/31 22:56:02 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void print_pointer(t_build *b, va_list list)
{
    unsigned long long int num;
	char	*ret;

    num = (unsigned long long)va_arg(list, unsigned int);
	if (num != 0)
	{	
		ret = printf_itoabase(num, 16, 0, b);
		write(1, ret, ft_strlen(ret));
	}
	else
	{
		//tahan vitusti edgecaseja
		write(1, "0x0", 3);
	}
}