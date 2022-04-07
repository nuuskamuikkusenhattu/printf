/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:38:23 by spuustin          #+#    #+#             */
/*   Updated: 2022/04/07 17:22:34 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	print_hash(t_build *b)
{
	if (b->flag == 'o')
	{
		write(1, "0", 1);
		b->print_count ++;
		b->precision--;
		if (b->width > b->strlen - 1)
			b->width--;
	}
	else
	{
		if (b->flag == 'x')
			write(1, "0x", 2);
		else if (b->flag == 'X')
			write(1, "0X", 2);
		b->print_count += 2;
		if (b->width > b->strlen - 2 && b->fill != '0')
			b->width-= 2;
	}
}

void	print_number(t_build *b, char *str)
{
	int		written;
	
	written = 0;
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
			written++;
		}
	}
	else if (b->fill == ' ')
	{
		while (b->width - b->plus - b->space - b->prefix > b->strlen)
		{
			write(1, &b->fill, 1);
			b->width--;
			written++;
		}
		if ((b->plus == 1 && b->isneg == 0) || (b->space == 1 && b->isneg == 0))
			printf_plus_or_space(b);
		else if (b->isneg == 1)
			write(1, "-", 1);
		if (b->hashtag == 1 && b->iszero == 0)
			print_hash(b);
		write(1, str, b->strlen);
	}
	else
	{
		if (b->hashtag == 1 && b->iszero == 0)
			print_hash(b);
		while (b->width - b->plus - b->space - b->prefix > b->strlen)
		{
			write(1, &b->fill, 1);
			b->width--;
			written++;
		}
		if ((b->plus == 1 && b->isneg == 0) || (b->space == 1 && b->isneg == 0))
			printf_plus_or_space(b);
		else if (b->isneg == 1)
			write(1, "-", 1);
		write(1, str, b->strlen);
	}
	b->print_count += b->strlen + written + b->isneg;
}
// di
void	signed_ints(t_build *b, va_list list)
{
	long long int		num;
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
	}
	str = printf_itoabase(num, b->base, b->precision, b);
	print_number(b, str);
	free(str);
}
//ouxX
void	unsigned_ints(t_build *b, va_list list)
{
	unsigned long long int	num;
	char 					*str;

	if (b->length == 'H')
		num = (unsigned char)va_arg(list, int);
	else if (b->length == 'h')
		num = (unsigned short int)va_arg(list, int);
	else if (b->length == 'E')
		num = (unsigned long long)va_arg(list, unsigned int);
	else if (b->length == 'l')
		num = (unsigned long long int)va_arg(list, unsigned long int);
	else
		num = (unsigned long long int)va_arg(list, unsigned long long int);
	str = printf_itoabase(num, b->base, b->precision, b);
	if (b->flag == 'X')
		ft_capitalize(str);
	if (num == 0)
	{
		b->iszero = 1;
		b->prefix = 0;
	}
	if (b->precision != 0)
		print_number(b, str);
	else
		print_string(b, "");
	free(str);
}
//written in home
void	floats(t_build *b, va_list list)
{
	long double num;
	char		*str;
	int			len;

	if (b->length == 'L')
		num = (long double)va_arg(list, long double);
	else
		num = (long double)va_arg(list, double);
	if (b->hashtag == 1 && b->precision == 0)
		b->precision = 1;
	str = ftoa(num, b->precision);
	len = (int) ft_strlen(str);
	write(1, str, len);
	b->print_count += len;
}
