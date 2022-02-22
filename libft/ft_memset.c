/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:55:49 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/18 13:16:51 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*temp;
	int				i;

	temp = (unsigned char *) str;
	i = 0;
	while (n > 0)
	{
		temp[i] = (unsigned char) c;
		i++;
		n--;
	}
	return (str);
}
