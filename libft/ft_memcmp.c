/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:01:18 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/29 12:41:51 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*temp1;
	const unsigned char	*temp2;
	int					i;

	if (!str1 && !str2)
		return (0);
	temp1 = (const unsigned char *) str1;
	temp2 = (const unsigned char *) str2;
	i = 0;
	while (n > 0)
	{
		if (temp1[i] != temp2[i])
			return (temp1[i] - temp2[i]);
		n--;
		i++;
	}
	return (0);
}
