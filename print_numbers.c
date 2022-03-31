/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:38:23 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/31 15:53:19 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	print_hash(t_build *b)
{
	if (b->flag == 'o')
	{
		write(1, "0", 1);
		b->print_count ++;	
	}
	else if (b->flag == 'x')
	{
		write(1, "0x", 2);
		b->print_count += 2;
	}
		
	else if (b->flag == 'X')
	{
		write(1, "0X", 2);
		b->print_count += 2;
	}
}
// di
void	signed_ints(t_build *b, va_list list)
{
	long long int		num;
	char			*str;
	int				len;

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
	str = printf_s_itoabase(num, b->base, b->precision);
	len = (int) ft_strlen(str);
	write(1, str, len);
	b->print_count += len;
	free(str);
}
//oux
void	unsigned_ints(t_build *b, va_list list)
{
	unsigned long long int	num;
	char 					*str;
	int						len;

	if (b->hashtag = '#')
		print_hash(b);
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
	if (b->width > b->precision)
		b->precision = b->width;
	str = printf_u_itoabase(num, b->base, b->precision);
	if (b->flag == 'X')
		ft_capitalize(str);
	len = (int) ft_strlen(str);
	write(1, str, len);
	b->print_count += len;
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
	str = ftoa(num, b->precision);
	len = (int) ft_strlen(str);
	write(1, str, len);
	b->print_count += len;
}
