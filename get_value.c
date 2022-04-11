/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_value.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:48:05 by spuustin          #+#    #+#             */
/*   Updated: 2022/04/11 11:46:43 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	get_unsigned_value(t_build *b, va_list l)
{
	if (b->length == 'H')
		b->u_value = (unsigned char)va_arg(l, int);
	else if (b->length == 'h')
		b->u_value = (unsigned short int)va_arg(l, int);
	else if (b->length == 'E')
		b->u_value = (unsigned long long)va_arg(l, unsigned int);
	else if (b->length == 'l')
		b->u_value = (unsigned long long int)va_arg(l, unsigned long int);
	else
		b->u_value = (unsigned long long int)va_arg(l, unsigned long long int);
}
