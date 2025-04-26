/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 10:08:19 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/26 08:59:23 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc != 3)
		return (1);
	size_t size = atoi(argv[1]);
	char c = argv[2][0];
	unsigned char *ptr = malloc(size);
	if (!ptr)
		return (1);
	size_t i = 0;
	while (i < size)
	{
		ptr[i] = i * 7 + 9;
		printf("%02x ", ptr[i++]);
	}
	printf("%c", '\n');
	ft_memset(ptr, (int)c, size);
	i = 0;
	while (i < size)
		printf("%02x ", ptr[i++]);
	free(ptr);
	return (0);
}
*/