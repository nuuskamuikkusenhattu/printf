/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:21:17 by spuustin          #+#    #+#             */
/*   Updated: 2022/04/11 12:00:06 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

//resets the values of a build to be empty other than the index (i)
//and the print_count (value to be returned)

void	reset_build(t_build *b)
{
	b->base = 10;
	b->precision = 1;
	b->flag = 'E';
	b->width = 0;
	b->fill = ' ';
	b->length = 'E';
	b->plus = 0;
	b->minus = 0;
	b->space = 0;
	b->hashtag = 0;
	b->unwritten = 0;
	b->strlen = 0;
	b->isneg = 0;
	b->iszero = 0;
	b->prefix = 0;
	b->written = 0;
	b->u_value = 0;
}

void	new_build(t_build *b)
{
	b->print_count = 0;
	b->i = 0;
	b->base = 10;
	b->precision = 1;
	b->flag = 'E';
	b->width = 0;
	b->fill = ' ';
	b->length = 'E';
	b->plus = 0;
	b->minus = 0;
	b->space = 0;
	b->hashtag = 0;
	b->unwritten = 0;
	b->strlen = 0;
	b->isneg = 0;
	b->iszero = 0;
	b->prefix = 0;
	b->written = 0;
	b->u_value = 0;
}
