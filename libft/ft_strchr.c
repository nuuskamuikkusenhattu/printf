/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:44:03 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/25 22:53:52 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns first located char c if found

char	*ft_strchr(const char *str, int c)
{
	int		i;

	if (c == '\0')
		return ((char *)str + ft_strlen((char *) str));
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
			i++;
		else
			return ((char *)str + i);
	}
	return (NULL);
}
