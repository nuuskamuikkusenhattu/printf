/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:25:08 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/25 20:59:01 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *string)
{
	int		i;

	i = 0;
	if (string)
	{
		while (string[i] != '\0')
		{
			ft_putchar(string[i]);
			i++;
		}
	}
}
