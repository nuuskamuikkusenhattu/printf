/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:25:46 by spuustin          #+#    #+#             */
/*   Updated: 2022/04/11 12:03:22 by spuustin         ###   ########.fr       */
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
	 || (c >= '0' && c <= '9' ) || c == ' ' || c == '+' || c == '-')
		return (1);
	return (0);
}
static void	identify_flag(const char *str, t_build *b, va_list list)
{
	b->flag = str[b->i];
	if (b->flag == 'd' || b->flag == 'i')
		signed_ints(b, list);	
	else if (str[b->i] == 'o' || str[b->i] == 'u' || str[b->i] == 'x' \
		|| str[b->i] == 'X')
	{
		if (str[b->i] == 'x' || str[b->i] == 'X')
			b->base = 16;
		if (str[b->i] == 'o')
		{
			b->base = 8;
			if (b->hashtag == 1)
				b->prefix = 1;
		}
		b->space = 0;
		b->plus = 0;
		unsigned_ints(b, list);
	}
	else if (str[b->i] == 'c')
		print_char((char) va_arg(list, int), b);
	else if(str[b->i] == 's')
		print_string(b, (char *) va_arg(list, char *));
	else if (str[b->i] == 'd')
		floats(b, list);
	else if (str[b->i] == '%')
		print_char(str[b->i], b);
	else
		b->i--;
}

static void	parse_flag(const char *str, t_build *b, va_list list)
{
	while (str[b->i] && is_valid_prechar(str[b->i]) == 1)
	{
		if (str[b->i] == '-')
			define_minus(b, str);
		else if (str[b->i] == '+')
			b->plus = 1;
		else if (str[b->i] == ' ')
			b->space = 1;
		else if (str[b->i] == '#')
		{
			b->hashtag = 1;
			b->prefix = 2;
		}
		else if (str[b->i] == '.')
			set_precision(b, str, list);
		else if (str[b->i] == '0' && (str[b->i - 1] != '.') && b->minus == 0)
			b->fill = '0';
		else if (str[b->i] >= '1' && str[b->i] <= '9')
			get_width(b, str);
		else if (str[b->i] == 'l' || str[b->i] == 'h')
			parse_length(str, b);
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

static void	printf_identify_flag(const char *format, va_list list, t_build *b)
{
	while (format[b->i] != '\0')
	{
		if (format[b->i] == '%')
		{
			if (b->unwritten != 0)
				print_unwritten(format, b);
			b->i++;
			parse_flag(format, b, list);
			b->i++;
		}
		else
		{
			b->unwritten++;
			b->i++;
		}
	}
	if (b->unwritten != 0)
		print_unwritten(format, b);
}

int ft_printf(const char * format, ...)
{
	t_build	*b;
	int		ret;
	b = (t_build *) malloc(sizeof(t_build));
	if (!b)
		exit(-1);
	new_build(b);
	va_list list;
	va_start(list, format);
	printf_identify_flag(format, list, b);
	va_end(list);
	ret = b->print_count;
	free(b);
	return (ret);
}
