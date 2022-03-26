/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:38:23 by spuustin          #+#    #+#             */
/*   Updated: 2022/03/24 23:02:51 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void print_pointer(t_build *b, va_list list)
{
    unsigned long long int num;

    num = (unsigned long long)va_arg(list, unsigned int);
}
