/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:51:36 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/25 22:51:37 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// searches for ndl from haystack from beg->len substring

char	*ft_strnstr(const char *haystack, const char *ndl, size_t len)
{
	int		i;

	if (ndl[0] == '\0')
		return ((char *) haystack);
	i = 0;
	while (haystack[i] && i < (int) len)
	{
		if (haystack[i] != ndl[0])
			i++;
		else
		{
			if (i + ft_strlen(ndl) > len)
				return (NULL);
			else
			{
				if (ft_strncmp(haystack + i, ndl, ft_strlen(ndl)) != 0)
					i++;
				else
					return ((char *) haystack + i);
			}
		}
	}
	return (NULL);
}
