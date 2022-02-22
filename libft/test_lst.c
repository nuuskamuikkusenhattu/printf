/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:33:33 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/25 00:29:10 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	print_list_content(t_list *l)
{
	printf("%s\n", l->content);
}
int main(void)
{
	t_list *new;
	t_list *first;
	void const *i;
	void const *str;
	size_t	j = 3;
	size_t	k = 5;
	i = (void const *)malloc(sizeof(i));
	if (i)
		i = "OK";
	str = (void const *)malloc(sizeof(str));
	if (str)
		str = "text";
	new = ft_lstnew(i, j);
	first = ft_lstnew(str, k);
	ft_lstiter(new, &print_list_content);
	ft_lstadd(&new, first);
	ft_lstiter(first, &print_list_content);
	return (0);
}
