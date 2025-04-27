/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 09:51:09 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/28 08:01:47 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define FT_ISUPPER	0x0001
#define FT_ISLOWER	0x0002
#define FT_ISALPHA	0x0004
#define FT_ISDIGIT	0x0008
#define FT_ISXDIGIT	0x0010
#define FT_ISSPACE	0x0020
#define FT_ISPRINT	0x0040
#define FT_ISASCII	0x0080
#define FT_ISPUNCT	0x4000
#define FT_ISALNUM	0x8000
/*
int		ft_isxdigit(int c);
int		ft_isspace(int c);
int		ft_ispunct(int c);

*/

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isupper(int c);
int		ft_islower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_atoi(const char *nptr);