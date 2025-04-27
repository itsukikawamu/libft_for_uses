/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:13:34 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/28 08:00:11 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_len;
	char	*b;
	
	if (*little == '\0')
		return ((char *)big);

	l_len = ft_strlen(little);
	b = (char *)big;
	while (l_len <= len && *b != '\0')
	{
		if (*b == *little)
		{
			if (ft_strcmp(b, little) == 0)
				return (b);
		}
		b++;
		len--;
	}
	return (NULL);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*
#include <assert.h>
int main(void)
{
	char *p1 = "hello";
	char *p2 = "ll";
	
	char *rev1 = ft_strnstr(p1, p2, 10);
	assert(rev1 == p1 + 2);


	char *p3 = "yes";
	char *p4 = "hi";
	
	char *rev2 = ft_strnstr(p3, p4, 10);
	assert(rev1 == NULL);

	char *p3 = NULL;
	char *p4 = NULL;
}
	*/