/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:50:14 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/29 12:42:16 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// overlap protected memcpy 

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*temp1;
	const unsigned char	*temp2;

	i = 0;
	temp1 = (unsigned char *) dst;
	temp2 = (const unsigned char *) src;
	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		while (++i <= n)
			temp1[n - i] = temp2[n - i];
	}
	else
	{
		while (n > 0)
		{
			temp1[i] = temp2[i];
			i++;
			n--;
		}
	}
	return (dst);
}
