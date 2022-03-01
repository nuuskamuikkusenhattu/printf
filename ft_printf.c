/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:25:46 by spuustin          #+#    #+#             */
/*   Updated: 2022/02/28 16:27:29 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
You have to manage the following conversions: csp
• You have to manage the following conversions: diouxX with the following flags: hh,
h, l and ll.
• You have to manage the following conversion: f with the following flags: l and L.
• You must manage %%
• You must manage the flags #0-+ and space
• You must manage the minimum field-width
• You must manage the precision
*/
#include "printf.h"
#include <stdio.h>

static char	*printf_identify_flags(char *format)
{
	char	*new;
	int i = 0;
	new = ft_delistr(format, ' ');
	return (new);
}

int ft_printf(const char * format, ...)
{
	va_list list;
	va_start(list, format);
	int i = 0;
	char	*flag;

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			ft_putchar(format[i]);
			i++;	
		}
		else
		{
			flag = printf_identify_flags((char *) format + i);
			ft_putnbr(va_arg(list, int));
			i += ft_strlen(flag);
		}
	}
	va_end(list);
	return (0);
}
