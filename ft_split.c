/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:52:54 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/29 23:20:16 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char *p, char c);
static void		*free_all(char **arr);
static char		*ft_strndup(const char *s, size_t len);

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*p;
	char	*head;
	size_t	i;

	if (!s)
		return (0);
	p = (char *)s;
	arr = ft_calloc(count_words(p, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (*p)
	{
		while (*p && *p == c)
			p++;
		head = p;
		while (*p && *p != c)
			p++;
		arr[i] = ft_strndup(head, p - head);
		if (!arr[i++])
			return (free_all(arr));
	}
	arr[i] = NULL;
	return (arr);
}

static char	*ft_strndup(const char *s, size_t len)
{
	char	*rev;
	size_t	i;

	rev = ft_calloc(len + 1, sizeof(char));
	if (rev == NULL)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		rev[i] = s[i];
		i++;
	}
	while (i < len)
		rev[i++] = '\0';
	return (rev);
}

static void	*free_all(char **arr)
{
	size_t	i;

	if (!arr)
		return (NULL);
	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
	return (NULL);
}

static size_t	count_words(char *p, char c)
{
	size_t	nwords;

	nwords = 0;
	while (*p)
	{
		while (*p && *p == c)
			p++;
		if (*p != '\0')
			nwords++;
		while (*p && *p != c)
			p++;
	}
	return (nwords);
}

/*
int main(void)
{
	char **arr;
	int	i = 0;
	arr = ft_split("aaa", 'a');
	while (arr[i])
	{
		printf("%d: %s\n", i, arr[i]); 
		i++;
	}
	free_all(arr);

	i = 0;
	arr = ft_split("ab cd ef ", "\0");
	while (arr[i])
	{
		printf("%d: %s\n", i, arr[i]); 
		i++;
	}
	free_all(arr);
	return (0);
}
	*/