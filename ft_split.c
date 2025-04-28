/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:52:54 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/28 22:39:49 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char *p, char c);
static void		*free_all(char **arr);
static char		*find_head(char *p, char c);

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*p;
	char	*head;
	size_t	i;

	p = (char *)s;
	arr = ft_calloc(count_words(p, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (*p)
	{
		p = find_head(p, c);
		head = p;
		while (*p && *p != c)
			p++;
		if (head < p)
		{
			arr[i] = ft_strndup(head, p - head);
			if (!arr[i++])
				return (free_all(arr));
		}
	}
	arr[i] = NULL;
	return (arr);
}

static char	*find_head(char *p, char c)
{
	while (*p && *p == c)
		p++;
	return (p);
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
