/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:25:46 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/15 14:43:24 by spuustin         ###   ########.fr       */
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

static void new_build(t_flag *new)
{
	new->print_count = 0;
	new->base = 10; //this may not be useful
	new->precision_dot = 0;
	new->flag = 'E'; // E = empty
	new->width = 0;
	new->length = 0;
}

static int	is_valid_char(char c)
{
	char	*characters;
	int		i;

	characters = "diouxXhlf."; //not to be included '%'
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

static int	dismantle_flag(const char *format, t_flag *build, int index)
{
	int		i;

	i = 0;
	while (format[index] && is_valid_char(format[index]) == 1)
		;
	return (i);
}

static void	printf_identify_flags(const char *format, va_list *list)
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
			dismantle_flag(format, build, i);
		else
		{
			write(1, &format[i], 1);
			build->print_count++;
			ft_putnbr(build->print_count);
		}
		i++;
	}
}

int ft_printf(const char * format, ...)
{
	va_list list;
	va_start(list, format);
	
	printf_identify_flags(format, &list);
	va_end(list);
	return (0);
}
