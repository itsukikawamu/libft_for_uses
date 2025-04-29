/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:10:55 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/29 21:07:53 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(const char *s, size_t len);
static char	*ft_strncpy(char *dst, const char *src, size_t n);

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*tail;

	tail = s1 + ft_strlen(s1);
	while (ft_strchr(set, *s1) != NULL)
	{
		if (s1 == tail)
			return (ft_strdup(""));
		s1++;
	}
	while (ft_strrchr(set, *(tail - 1)) != NULL)
		tail--;
	return (ft_strndup(s1, tail - s1));
}

static char	*ft_strndup(const char *s, size_t len)
{
	char	*rev;

	rev = ft_calloc(len + 1, sizeof(char));
	if (rev == NULL)
		return (NULL);
	return ((char *)ft_strncpy(rev, s, len));
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
int main(void)
{
	char *s = ft_strtrim("", "\n\t");
	printf("result: %0x\n", (int)s[0]);
	assert(!ft_strncmp("", s, 1));

	s = ft_strtrim("a", "aaaa");
	printf("result: %0x\n", (int)s[0]);
	assert(!ft_strncmp("", s, 1));
	
	return (0);
}
*/