/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:59:21 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/29 12:22:03 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_beg_spaces(char const *str)
{
	int		i;
	int		spaces;

	i = 0;
	spaces = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			i++;
			spaces++;
		}
		else
			return (spaces);
	}
	return (spaces);
}

static int	count_end_spaces(char const *str)
{
	int		spaces;
	size_t	i;

	spaces = 0;
	i = ft_strlen(str) - 1;
	while (i > 0)
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			spaces++;
			i--;
		}
		else
			return (spaces);
	}
	return (spaces);
}

char	*ft_strtrim(char const *str)
{
	char	*new;
	int		spaces_beg;
	int		spaces_end;
	int		i;

	if (!str)
		return (NULL);
	spaces_beg = count_beg_spaces(str);
	spaces_end = count_end_spaces(str);
	if (spaces_beg == (int) ft_strlen(str))
		return (ft_strdup(""));
	new = (char *)malloc(sizeof(*new) * (((int) ft_strlen(str)
					- spaces_beg - spaces_end + 1)));
	if (!new)
		return (NULL);
	i = 0;
	while (i + spaces_beg < ((int) ft_strlen(str) - spaces_end))
	{
		new[i] = str[i + spaces_beg];
		i++;
	}
	new[i] = '\0';
	return (new);
}
