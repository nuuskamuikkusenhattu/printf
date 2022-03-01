/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:50:53 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/11 12:53:29 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char c = 'a';

	ft_putchar_fd(c, -1);
	ft_putchar_fd(c, 0);
	ft_putchar_fd(c, 1);
	ft_putchar_fd(c, 2);
	return (0);
}