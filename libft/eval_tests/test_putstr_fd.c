/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:53:44 by spuustin          #+#    #+#             */
/*   Updated: 2021/11/11 12:55:08 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	char *str = "vaapukkamehu";

	ft_putstr_fd(str, -2);
	ft_putstr_fd(str, -1);
	ft_putstr_fd(str, 0);
	ft_putstr_fd(str, 1);
	ft_putstr_fd(str, 2);
	return (0);
}
