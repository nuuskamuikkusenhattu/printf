/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:46:10 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/29 12:12:27 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while ((str1[i] == str2[i]) && str1[i] != '\0' && i < n - 1)
		{
			i++;
		}
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	return (0);
}
