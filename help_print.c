/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:55:22 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/31 22:00:56 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	printf_plus_or_space(t_build *b)
{
	if (b->plus == 1 && b->isneg == 0)
	{
		write(1, "+", 1);
		b->print_count++;
	}
	else if (b->space == 1 && b->isneg == 0 && b->plus == 0)
	{
		write (1, " ", 1);
		b->print_count++;
	}
}
