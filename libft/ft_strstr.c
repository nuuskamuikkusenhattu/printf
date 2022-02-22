/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:35:14 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/25 22:54:23 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// searches ndl from haystack

char	*ft_strstr(const char *haystack, const char *ndl)
{
	int		i;

	if (ndl[0] == '\0')
		return ((char *) haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] != ndl[0])
			i++;
		else
		{
			if (ft_strncmp(haystack + i, ndl, ft_strlen((char *) ndl)) != 0)
				i++;
			else
				return ((char *) haystack + i);
		}
	}
	return (NULL);
}
