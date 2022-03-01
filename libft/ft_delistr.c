/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delistr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:49:37 by spuustin          #+#    #+#             */
/*   Updated: 2022/02/28 14:00:30 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// this  function returns a fresh string from a pointer to the delimiter c
// if no delimiter c is found, an entire str is returned

#include "libft.h"

char	*ft_delistr(char *str, char c)
{
	int		i;
	char	*new;
	i = 0;
	if (c == '\0')
		return (ft_strnew(0));
	while (str[i] != '\0' && str[i] != c)
		i++;
	new = ft_strnew(i);
	ft_strncpy(new, str, i);
	return (new);
}