/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdenys-a <cdenys-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 18:41:51 by rberon-s          #+#    #+#             */
/*   Updated: 2019/01/30 16:05:42 by cdenys-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define BUFF_SIZE 100

# include <string.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

int				get_next_line(const int fd, char **line);
int				ft_atoi(const char *str);
int				ft_islower(int c);
int				ft_isupper(int c);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			ft_putchar_fd(char c, int fd);
void			ft_putchar(char c);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putnbr(int nb);
void			ft_putstr_fd(const char *str, int fd);
void			ft_putstr(const char *str);
char			*ft_strcat(char *dest, const char *src);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strncpy(char *dest, const char *src, size_t n);
char			*ft_strdup(const char *src);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlen(const char *str);
char			*ft_strncat(char *dest, const char *src, size_t nb);
char			*ft_strstr(const char *str, const char *to_find);
char			*ft_strchr(const char *s, int c);
char			*ft_strrev(char *str);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *str, const char *to_find, size_t len);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *b, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putendl(char const *s);
char			*ft_itoa(int nbr);
char			**ft_strsplit(char const *str, char c);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
void			*ft_dup(void const *content, size_t content_size);
t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void			ft_lstaddend(t_list **s, t_list *new);
void			*ft_lstfold(t_list *lst, void *(*f)(const void *,
const void*, size_t));
t_list			*ft_lstend(t_list *list);
void			*ft_realloc(void *ptr, size_t size);
int				ft_sqrt(int n);
int				ft_sqrtm(int n);
int				ft_min(int a, int b);
int				ft_minf(int a, int b, int c, int d);
int				ft_max(int a, int b);
int				ft_maxf(int a, int b, int c, int d);
int				ft_addnewline(char **line);
char			*ft_itoa_base(int value, int base);

#endif
