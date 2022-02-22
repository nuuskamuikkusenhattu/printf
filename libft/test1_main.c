/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:16:20 by spuustin          #+#    #+#             */
/*   Updated: 2021/12/08 13:34:40 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void test_memset(void);
void test_bzero(void);
void test_memcpy(void);
void test_memccpy(void);
void test_memmove(void);
void test_memchr(void);
void test_memcmp(void);
void test_strcpy(void);
void test_strncpy(void);
void test_strcat(void);
void test_strncat(void);
void test_strlcat(void);
void test_strchr(void);
void test_strrchr(void);
void test_strstr(void);
void test_strnstr(void);
void test_strcmp(void);
void test_strncmp(void);
void test_strlen(void);
void test_atoi(void);
void test_strdup(void);
void test_iswhat(void);
void test_towhat(void);

int main(void)
{
	test_memset();
	test_bzero();
	test_memcpy();
	test_memccpy();
	test_memmove();
	test_memchr();
	test_memcmp();
	test_strcpy();
	test_strncpy();
	test_strcat();
	test_strncat();
	test_strlcat();
	test_strchr();
	test_strrchr();
	test_strstr();
	test_strnstr();
	test_strlen();
	test_strdup();
	test_strcmp();
	test_strncmp();
	test_atoi();
	test_iswhat();
	test_towhat();
	return (0);
}
