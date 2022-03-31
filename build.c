/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:21:17 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/31 22:00:11 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

//resets the values of a build to be 0's
// and the base to be 10

void reset_build(t_build *new)
{
	new->print_count = 0;
	new->i = 0;
	new->base = 10;
	new->flag = 'E';
	new->width = 0;
	new->length = 'E';
	new->precision = 0;
	new->unwritten = 0;
	new->fill = " ";
	new->plus = 0;
	new->isneg = 0;
	new->space = 0;
}

/*

	int		print_count;
	int		i;
	int		base;
	long long	value;
	char	dot;
	int		precision;
	char	flag;
	int		width;
	char	length; //h,H(hh),l,7(ll),L
	char	plus;
	char	minus;
	char	hashtag; //adds a decimalpoint to floats even when no decimals
*/