/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:38:23 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/21 20:13:56 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

// di
void	signed_ints(t_flag *build, char *format, va_list *list)
{
	long long		num;
	char			*str;

	if (build->length == 'l')
		num = (long) build->value;
	else if (build->length == 'H')
		num = (char) build->value;
	else if (build->length == 'h')
		num = (short) build->value;
	else
		num = (int) build->value;
	str = ft_itoabase(num, build->base);
	write(1, str, ft_strlen(str));
	build->print_count += ft_strlen(str);
	free(str);
}
//oux
void	unsigned_ints(t_flag *build, char *format, va_list *list)
{
	unsigned long long		num;
	char 					*str;

	if (build->length == 'l')
		num = (unsigned long) build->value;
	else if (build->length == 'H')
		num = (unsigned char) build->value;
	else if (build->length == 'h')
		num = (unsigned short) build->value;
	else
		num = (unsigned int) build->value;
	str = ft_itoabase(num, build->base);
	write(1, str, ft_strlen(str));
	build->print_count += ft_strlen(str);
	free(str);
}