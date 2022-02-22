/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:28:38 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/29 12:14:02 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *str, char c)
{
	int		count;
	int		i;

	if (!str)
		return (0);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 || str[i - 1] == c) && str[i] != c)
			count++;
		i++;
	}
	return (count);
}

static int	word_len(char const *str, char c)
{
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_strsplit(char const *str, char c)
{
	char	**arr;
	int		arr_i;
	int		count;
	int		i;

	count = word_count(str, c);
	arr = (char **)malloc(sizeof(char *) * (count + 1));
	if (!arr)
		return (NULL);
	arr_i = 0;
	i = 0;
	while (count > 0)
	{
		while (str[i] == c)
			i++;
		arr[arr_i] = ft_strnew(word_len(str + i, c));
		if (!arr[arr_i])
			return (ft_free_array(arr));
		ft_strncpy(arr[arr_i], str + i, word_len(str + i, c));
		i += word_len(str + i, c);
		arr_i++;
		count--;
	}
	arr[arr_i] = NULL;
	return (arr);
}
