/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:38:23 by spuustin          #+#    #+#             */
/*   Updated: 2022/04/11 12:08:10 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	print_num_with_zero(t_build *b, char *str)
{
	if ((b->plus == 1 && b->isneg == 0) || (b->space == 1 && b->isneg == 0))
		printf_plus_or_space(b);
	else if (b->isneg == 1)
	{
		write(1, "-", 1);
		b->plus = 0;
	}
	if (b->hashtag == 1 && b->iszero == 0)
		print_hash(b);
	while (b->precision < b->width && b->precision != 1)
	{
		write(1, " ", 1);
		b->precision--;
		b->width--;
		b->written++;
	}
	while (b->width - b->plus - b->space - b->prefix > b->strlen)
	{
		write(1, &b->fill, 1);
		b->width--;
		b->written++;
	}
	write(1, str, b->strlen);
}

static void	print_num_with_space(t_build *b, char *str)
{
	while (b->width - b->plus - b->space - b->prefix > b->strlen)
	{
		write(1, &b->fill, 1);
		b->width--;
		b->written++;
	}
	if ((b->plus == 1 && b->isneg == 0) || (b->space == 1 && b->isneg == 0))
		printf_plus_or_space(b);
	else if (b->isneg == 1)
		write(1, "-", 1);
	if (b->hashtag == 1 && b->iszero == 0)
		print_hash(b);
	write(1, str, b->strlen);
}

void	print_number(t_build *b, char *str)
{
	if (b->minus == 1)
	{
		if ((b->plus == 1 && b->isneg == 0) || (b->space == 1 && b->isneg == 0))
			printf_plus_or_space(b);
		else if (b->isneg == 1)
			write(1, "-", 1);
		if (b->hashtag == 1 && b->iszero == 0)
			print_hash(b);
		write(1, str, b->strlen);
		while (b->width - b->plus - b->space - b->prefix > b->strlen)
		{
			write(1, &b->fill, 1);
			b->width--;
			b->written++;
		}
	}
	else if (b->fill == ' ')
		print_num_with_space(b, str);
	else
		print_num_with_zero(b, str);
	b->print_count += b->strlen + b->written + b->isneg;
}
//di

void	signed_ints(t_build *b, va_list list)
{
	long long int	num;
	char			*str;

	if (b->length == 'H')
		num = (char)va_arg(list, int);
	else if (b->length == 'h')
		num = (short int)va_arg(list, int);
	else if (b->length == 'E')
		num = (long long int)va_arg(list, int);
	else if (b->length == 'l')
		num = (long long int)va_arg(list, long int);
	else
		num = (long long int)va_arg(list, long long int);
	if (num < 0)
	{
		b->isneg = 1;
		num *= -1;
		b->width--;
	}
	str = printf_itoabase(num, b->base, b->precision, b);
	print_number(b, str);
	free(str);
}
//ouxX

void	unsigned_ints(t_build *b, va_list list)
{
	char	*str;

	get_unsigned_value(b, list);
	str = printf_itoabase(b->u_value, b->base, b->precision, b);
	if (b->flag == 'X')
		ft_capitalize(str);
	if (b->u_value == 0)
	{
		b->iszero = 1;
		b->prefix = 0;
	}
	if (b->precision != 0)
		print_number(b, str);
	else if (b->flag == 'o' && b->hashtag == 1)
		print_hash(b);
	else
		print_string(b, "");
	free(str);
}
