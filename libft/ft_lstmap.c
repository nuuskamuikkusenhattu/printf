/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 00:31:41 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/29 12:37:50 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// allocates memory for new list, adds function returns to new list.

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	temp = f(lst);
	if (!temp)
		return (NULL);
	new = (t_list *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new = temp;
	while (lst->next)
	{
		lst = lst->next;
		temp->next = f(lst);
		if (temp->next == NULL)
		{
			free(new);
			new = NULL;
			return (NULL);
		}
		temp = temp->next;
	}
	return (new);
}
