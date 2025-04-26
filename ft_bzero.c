/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 10:28:57 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/26 09:00:10 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	size_t size = atoi(argv[1]);
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
	ft_bzero(ptr, size);
	i = 0;
	while (i < size)
		printf("%02x ", ptr[i++]);
	free(ptr);
	return (0);
}
*/