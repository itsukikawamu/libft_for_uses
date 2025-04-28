/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:36:11 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/29 07:34:24 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*ft_strndup(const char *s, size_t len)
{
	char	*rev;

	rev = ft_calloc(len + 1, sizeof(char));
	if (rev == NULL)
		return (NULL);
	return ((char *)ft_strncpy(rev, s, len));
}

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	len;

	len = ft_strlen(s);
	if (len > maxlen)
		len = maxlen;
	return (len);
}
