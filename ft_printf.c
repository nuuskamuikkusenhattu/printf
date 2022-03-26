/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:25:46 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/24 22:32:59 by spuustin         ###   ########.fr       */
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
	if (c == '-' || c == '.' || c == 'l' || c == 'h' || c == '#' \
	 || (c >= '0' && c <= '9') || c == 'd' || c == 'i' || c == 'o' \
	 || c == 'u' || c == 'x' || c == 'X')
		return (1);
	return (0);
}
// vois teha nii et flag-charit on omassa funktiossa jotka tunnistetaa
//tai jos semmone nahdaan nii mennaan uuteen funktioon joka kutsuu tulostajaa
static void		parse_flag(const char *str, t_build *b, va_list *list)
{
	while (str[b->i] && is_valid_char(str[b->i]) > 0)
	{
	if (str[b->i] == '%')
		;
	else if (str[b->i] == '-')
		printf_minus(b, str, list);
	else if (str[b->i] == 'd' || str[b->i == 'i'])
		signed_ints(b, &list);
	else if (str[b->i] == 'o' || str[b->i] == 'u' || str[b->i] == 'x' \
	|| str[b->i] == 'X')
	{
		if (str[b->i] == 'x' || str[b->i] == 'X')
			b->base == 16;
		if (str[b->i] == 'o')
			b->base == 8;
		b->flag = str[b->i];
		unsigned_ints(b, &list);
	}
	else if (str[b->i] == 'c')
		print_char((char) va_arg(*list, int), b);
	else if(str[b->i] == 's')
		print_string(b, (char *) va_arg(*list, char *));
	}
	b->i++;
}

static int	printf_identify_flag(const char *format, va_list *list)
{
	t_build	*b;

	b = (t_build *) malloc(sizeof(t_build));
	if (!b)
		exit(-1);
	new_build(b);
	while (format[b->i] != '\0')
	{
		if (format[b->i] == '%')
		{
			b->i++;
			parse_flag(format, b, list);
		}
		else
		{
			// this can be improved heavily with minimizing amount of function-calls
			write(1, &(format[b->i]), 1);
			b->print_count++;
			b->i++;
		}
	}
	return (b->print_count);
}

int ft_printf(const char * format, ...)
{
	va_list list;
	va_start(list, format);
	
	printf_identify_flags(format, &list);
	va_end(list);
	return (0);
}
