/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:37:19 by spuustin          #+#    #+#             */
/*   Updated: 2022/04/14 11:47:18 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_build
{
	int						print_count;
	int						i;
	int						base;
	int						precision;
	char					flag;
	int						width;
	char					fill;
	char					length;
	int						plus;
	int						minus;
	int						space;
	int						hashtag;
	int						unwritten;
	int						strlen;
	int						isneg;
	int						iszero;
	int						prefix;
	int						written;
	unsigned long long int	u_value;
	long double				f_value;
	int						prec_defined;
}			t_build;

int		ft_printf(const char*format, ...);

//struct
void	reset_build(t_build *b);
void	new_build(t_build *b);

//width
void	define_minus(t_build *build, const char *format);
void	get_width(t_build *b, const char *format);

//length
void	parse_length(const char *str, t_build *b);

//precision
void	set_precision(t_build *build, const char *format, va_list list);

//integers
void	signed_ints(t_build *build, va_list list);
void	unsigned_ints(t_build *build, va_list list);
char	*printf_itoabase(unsigned long long int n, int base, int p, t_build *b);
void	get_unsigned_value(t_build *b, va_list list);
void	print_number(t_build *b, char *str);

//floats
char	*ftoa(long double d, int precision, t_build *b);
void	floats(t_build *b, va_list list);

//chars
void	print_char(char c, t_build *b);

//strings
void	print_string(t_build *b, char *str);

//pointers
void	print_pointer(t_build *b, va_list list);

//helpers
void	printf_plus_or_space(t_build *b);
void	print_only_width(t_build *b);
void	print_hash(t_build *b);
int		is_valid_prechar(char c);
void	octal_or_hexal(t_build *b, char c);
void	fix_precision_with_hash(t_build *b);
int		ft_av(t_build *b, int n);
void	hash(t_build *b);

#endif