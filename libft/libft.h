/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:42:14 by spuustin          #+#    #+#             */
/*   Updated: 2022/02/28 14:49:45 by spuustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *string);
void	ft_putstr_fd(char const *str, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *str, int fd);
void	ft_putnbr(int nb);
void	ft_putnbr_fd(int nb, int fd);
size_t	ft_strlen(const char *str);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strcpy(char *destination, const char *source);
char	*ft_strncpy(char *dest, const char *src, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strstr(const char *haystack, const char *ndl);
char	*ft_strnstr(const char *haystack, const char *ndl, size_t len);
char	*ft_strsub(char const *str, unsigned int start, size_t len);
char	*ft_strjoin(char const *str1, char const *str2);
char	*ft_strtrim(char const *str);
void	ft_strclr(char *s);
char	**ft_strsplit(char const *str, char c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *str, char (*f)(char));
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));
void	ft_bzero(void *s, size_t n);
void	*ft_memalloc(size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	ft_memdel(void **ap);
t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
char	**ft_free_array(char **array);
int		ft_num_length(int n);
int		ft_isspace(char c);
int		ft_islowercase(char c);
int		ft_isuppercase(char c);

//

char	*ft_delistr(char *str, char c);
#endif