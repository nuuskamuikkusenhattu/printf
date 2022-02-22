/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:26:38 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/29 12:14:09 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size-long new string containing null-chars

char	*ft_strnew(size_t size)
{
	char	*new;
	int		i;

	if ((int) size < 0)
		return (NULL);
	new = (char *)malloc(sizeof(*new) * (size + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i < (int) size)
	{
		new[i] = '\0';
		i++;
	}
	new[i] = '\0';
	return (new);
}
