/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:51:32 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/15 16:31:31 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (n > 0)
	{
		((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
		i++;
		n--;
	}
	return (dst);
}
