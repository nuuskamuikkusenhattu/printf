/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:20:54 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/17 21:24:03 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	capitalize(unsigned int i, char a)
{
	i = 0;
	if (a >= 'a' && a <= 'z')
		a -= ('a' - 'A');
	return (a);
}

int main(void)
{
	char const	*str = "juolukka-jussi";
	
	ft_putstr(ft_strmapi(str, &capitalize));
	return (0);
}