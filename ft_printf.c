/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:25:46 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/22 12:52:26 by spuustin         ###   ########.fr       */
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

static int	is_valid_char(char c)
{
	if (c == '-' || c == '-')
		return (1);
	return (0);
}

static int	parse_flag(const char *format, t_flag *build)
{
	while (is_valid_char(format[build->i]) == 1 && format[build->i])
	{
	if (format[build->i] == '%')
	{
		write(1, '%', 1);
		build->print_count++;
		return (1);
	}
	else if (format[build->i] == '-')
		printf_minus(build, format);
	}
	return (1);
}

static int	printf_identify_flags(const char *format, va_list *list)
{
	int		i;
	t_flag	*build;

	i = 0;
	build = (t_flag *) malloc(sizeof(t_flag));
	if (!build)
		exit(-1);
	new_build(build);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			i+= parse_flag(format + i + 1, build);
		else
		{
			write(1, &format[i], 1);
			build->print_count++;
			ft_putnbr(build->print_count);
		}
		i++;
	}
	return (build->print_count);
}

int ft_printf(const char * format, ...)
{
	va_list list;
	va_start(list, format);
	
	printf_identify_flags(format, &list);
	va_end(list);
	return (0);
}
