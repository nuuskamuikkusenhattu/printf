/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:13:33 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/29 12:12:09 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char(*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	if (!str || !f)
		return (NULL);
	new = (char *)malloc(sizeof(*new) * (ft_strlen((char *)str) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		new[i] = f(i, str[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
