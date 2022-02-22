/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:18:32 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/29 12:12:00 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
if size is smaller than dest_len, return size + source_len
copy scr to end of dest till dest_size-1 reached
return dst_len+src_len, or size+src_len, which ever is bigger
*/

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	j = 0;
	dest_len = ft_strlen((char *)dest);
	src_len = ft_strlen((char *)src);
	if (size < dest_len)
		return (size + src_len);
	i = dest_len;
	while (i < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size > dest_len)
		return (dest_len + src_len);
	return (size + src_len);
}
