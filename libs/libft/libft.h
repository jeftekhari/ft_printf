/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:49:08 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:49:10 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include "get_next_line.h"

# define ALPHANUMS	"0123456789abcdefghijklmnopqrstuvwxyz"
# define HEXNUMS	"0123456789ABCDEF"
# define DIGITS		"0123456789"

# define RED		31
# define GREEN		32
# define YELLOW		33
# define BLUE		34
# define MAGENTA	35
# define CYAN		36
# define GREY		37
# define DEFAULT	39

# define FT_ABS(n) (n < 0) ? -n : n
# define FT_MAX(a,b) (a > b) ? a : b
# define FT_MIN(a, b) (a < b) ? a : b

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

/*
** memory
*/
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, void const *src, size_t n);
void			*ft_memccpy(void *dst, void const *src, int c, size_t n);
void			*ft_memmove(void *dst, void const *src, size_t len);
void			*ft_memchr(void const *s, int c, size_t n);
int				ft_memcmp(void const *s1, const void *s2, size_t n);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);

/*
** string (Extra:	ft_strltrim, ft_strrtrim,
**					ft_skip_spaces, ft_skip_delim,
**					ft_word_count, ft_strrev,
**					ft_tabnew)
*/
size_t			ft_strlen(char const *s);
char			*ft_strdup(char const *s1);
char			*ft_strcpy(char *dst, char const *src);
char			*ft_strncpy(char *dst, char const *src, size_t len);
char			*ft_strcat(char *s1, char const *s2);
char			*ft_strncat(char *s1, char const *s2, size_t n);
size_t			ft_strlcat(char *dst, char const *src, size_t size);
char			*ft_strchr(char const *s, int c);
char			*ft_strrchr(char const *s, int c);
char			*ft_strstr(char const *big, char const *little);
char			*ft_strnstr(char const *big, char const *little, size_t len);
int				ft_strcmp(char const *s1, char const *s2);
int				ft_strncmp(char const *s1, char const *s2, size_t n);
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
char			*ft_strltrim(char const *s);
char			*ft_strrtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
char			*ft_skip_spaces(char const *s);
char			*ft_skip_delim(char const *s, char c);
size_t			ft_word_count(char const *s, char c);
char			*ft_strrev(char *s);
char			**ft_tabnew(size_t size);

/*
** integer (Extra: ft_atoi_base, ft_ltoa_base, ft_count_digits)
*/
int				ft_atoi(char const *str);
int				ft_atoi_base(char const *str, int base);
char			*ft_itoa(int n);
char			*ft_ltoa_base(long n, size_t base);
size_t			ft_count_digits(long n, size_t base);

/*
** char (Extra: ft_isspace, ft_isspacetabline,
**				ft_islower, ft_isupper,
**				ft_trans_toupper, ft_trans_tolower)
*/
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_isupper(int c);
int				ft_islower(int c);
int				ft_isspace(int c);
int				ft_isspacelinetab(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			ft_trans_toupper(char *c);
void			ft_trans_tolower(char *c);

/*
** print (Extra: 	ft_putnbr_base_fd, ft_puterr,
**					ft_set_print_color_to)
*/
void			ft_putchar_fd(char c, int fd);
void			ft_putchar(char c);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putstr(char const *s);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putendl(char const *s);
void			ft_putnbr_base_fd(long n, int base, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putnbr(int n);
void			ft_puterr(char const *msg);
void			ft_set_print_color_to(int color);

/*
** list
*/
t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
** Extra functions
*/
int				open_file_read_only(const char *file_path);
size_t			ft_strclen(const char *str, char c);
char			*ft_strcdup(const char *str, char c);
char			*ft_strndup(const char *str, size_t len);
long			ft_strtol(char *str, char **endptr, int base);

#endif
