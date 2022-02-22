/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 20:26:15 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/29 12:12:04 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	char	*new;
	int		i;

	if (!str || !f)
		return (NULL);
	new = (char *)malloc(sizeof(*new) * (ft_strlen((char *)str) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		new[i] = f(str[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
