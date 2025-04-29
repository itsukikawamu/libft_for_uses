/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:36:11 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/29 21:31:10 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t maxlen);
static char		*ft_strndup(const char *s, size_t len);
static char		*ft_strncpy(char *dst, const char *src, size_t n);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sub_len;
	char	*rev;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	sub_len = ft_strnlen(s + start, len);
	return (ft_strndup(s + start, sub_len));
}

static char	*ft_strndup(const char *s, size_t len)
{
	char	*rev;

	rev = ft_calloc(len + 1, sizeof(char));
	if (rev == NULL)
		return (NULL);
	return ((char *)ft_strncpy(rev, s, len));
}

static size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	len;

	len = ft_strlen(s);
	if (len > maxlen)
		len = maxlen;
	return (len);
}

static char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
		dst[i++] = '\0';
	return (dst);
}

/*
int main(void){
	char *s = ;
	size_t i = ;
	size_t len = ;
	ft_substr();
}
*/