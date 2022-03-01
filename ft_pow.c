/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:13:29 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/01 13:19:13 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// multiplies double a itself b many times

double	ft_pow(double a, int b)
{
	while (b > 0)
	{
		a *= a;
		b--;
	}
	return (a);
}

int main (void)
{
	double i = 5;
}