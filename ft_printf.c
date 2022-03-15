/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:25:46 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/15 20:36:23 by spuustin         ###   ########.fr       */
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

static void	fill_build(char *c, t_flag *build)
{
	if (c[0] == '.')
		build->precision_dot = 1;
}

static int	is_valid_char(char c)
{
	char	*characters;
	int		i;

	characters = "diouxXf."; //not to be included '%'
	//#0-+ *
	i = 0;
	while (characters[i] != '\0')
	{
		if (characters[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	parse_flag(const char *format, t_flag *build)
{
	int		i;

	i = 0;
	if (format[i] == '%')
	{
		ft_putchar('%');
		build->print_count++;
		return (1);
	}
	while (format[i] && is_valid_char(format[i]) == 1)
	{
		fill_build(format + i, build);
		i++;
	}
		
	return (i);
}

static int	printf_identify_flags(const char *format, va_list *list)
{
	int		i;
	t_flag	*build;

	i = 0;
	if (!(build = (t_flag *) malloc(sizeof(t_flag))))
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
