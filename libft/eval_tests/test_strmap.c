/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 20:35:58 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/17 21:27:07 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	capitalize(char a)
{
	if (a >= 'a' && a <= 'z')
		a -= ('a' - 'A');
	return (a);
}

int main(void)
{
	char const	*str = "juolukka-jussi";
	
	ft_putstr(ft_strmap(str, &capitalize));
	return (0);
}