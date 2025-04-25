/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 09:51:09 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/25 11:21:26 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define FT_ISSUPPER	0x0001
#define FT_ISLOWER	0x0002
#define FT_ISALPHA	0x0004
#define FT_ISDIGIT	0x0008
#define FT_XDIGIT	0x0010

#define FT_ISALNUM	0x0000
#define FT_ISASCII	0x0000
#define FT_ISPRINT	0x0040
#define FT_ISPUNCT	0x8000

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	bzero(void *s, size_t n);
