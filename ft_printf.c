/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:25:46 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/31 23:15:49 by spuustin         ###   ########.fr       */
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

static int	is_valid_prechar(char c)
{
	if (c == '-' || c == '.' || c == 'l' || c == 'h' || c == '#' \
	 || (c >= '0' && c <= '9') || c == 'd' || c == 'i' || c == 'o' \
	 || c == 'u' || c == 'x' || c == 'X' || c == 'p' \
	 || c == ' ' || c == '+' || c == '-')
		return (1);
	return (0);
}
static void	identify_flag(const char *str, t_build *b, va_list list)
{
	b->flag = str[b->i];
	if (str[b->i] == 'd' || str[b->i == 'i'])
		signed_ints(b, list);
	else if (str[b->i] == 'o' || str[b->i] == 'u' || str[b->i] == 'x' \
		|| str[b->i] == 'X')
	{
		if (str[b->i] == 'x' || str[b->i] == 'X')
			b->base = 16;
		if (str[b->i] == 'o')
			b->base = 8;
		unsigned_ints(b, list);
	}
	else if (str[b->i] == 'c')
		print_char((char) va_arg(list, int), b);
	else if(str[b->i] == 's')
		print_string(b, (char *) va_arg(list, char *));
	else if (str[b->i == 'd'])
		; //floatti
	else
	{
		write(1, "error.\n", 7);
		exit(-1);
	}
}

static void	parse_flag(const char *str, t_build *b, va_list list)
{
	while (str[b->i] && is_valid_prechar(str[b->i]) > 0)
	{
		if (str[b->i] == '%')
			; //what ever %% does
		else if (str[b->i] == '-')
			define_minus(b, str);
		else if (str[b->i] == '+')
			b->plus = 1;
		else if (str[b->i] == ' ')
			b->space = 1;
		else if (str[b->i] == '.')
			set_precision(b, str, list);
		else if (str[b->i] == '0')
			b->fill = '0';
		else if (str[b->i] >= '1' && str[b->i] <= '9')
			get_width(b, str);
		b->i++;
	}
	identify_flag(str, b, list);
	reset_build(b);
}

static void	print_unwritten(const char *format, t_build *b)
{
	write(1, format + (b->i - b->unwritten), b->unwritten);
	b->print_count += b->unwritten;
	b->unwritten = 0;
}

static int	printf_identify_flag(const char *format, va_list list)
{
	t_build	*b;

	b = (t_build *) malloc(sizeof(t_build));
	if (!b)
		exit(-1);
	reset_build(b);
	while (format[b->i] != '\0')
	{
		if (format[b->i] == '%')
		{
			if (b->unwritten != 0)
				print_unwritten(format, b);
			b->i++;
			parse_flag(format, b, list);
		}
		else
		{
			b->unwritten++;
			b->i++;
		}
	}
	if (b->unwritten != 0)
		print_unwritten(format, b);
	return (b->print_count);
}

int ft_printf(const char * format, ...)
{
	va_list list;
	va_start(list, format);
	
	printf_identify_flag(format, list);
	va_end(list);
	return (0);
}
