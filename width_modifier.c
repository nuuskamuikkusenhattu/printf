/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width_modifier.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:41:59 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/23 20:06:18 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		printf_minus(t_build *build, const char *format, va_list *list)
{
	int		ret;

	ret = 0;
	build->minus = '-';
	build->i++;
	if (format[build->i] == '0')
		build->i++;
	build->width = ft_atoi(format + build->i + 1);
	ret += ft_num_length(build->width) + 1;
	build->i += ret;
	//call print
	return (ret);
}
