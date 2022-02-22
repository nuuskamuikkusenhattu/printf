/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:44:29 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/29 12:09:53 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*temp;

	if ((int)size < 0)
		return (NULL);
	temp = (void *)malloc(sizeof(*temp) * size);
	if (!temp)
		return (NULL);
	return (ft_memset(temp, 0, size));
}
