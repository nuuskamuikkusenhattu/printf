/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:21:17 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/22 12:51:52 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void new_build(t_flag *new)
{
	new->print_count = 0;
	new->i = 0;
	new->base = 10;
	new->dot = 'E'; // E = empty
	new->flag = 'E'; // E = empty
	new->width = 0;
	new->length = 'E';
}