/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:42:29 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/26 09:39:42 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	unsigned char	src[] = {'a', 'b', 'c', 'A', '_',0x00,  0x88, 0xff,};
	int		n = sizeof(src);
	int		size = 20;
	unsigned char	dest[size];
	int		i = 0;

	ft_bzero(dest, size);
	ft_memcpy(dest, src, n);
	
	printf("src:    ");
	i = 0;
	while (i < size)
		printf("%02x ", src[i++]);
	printf("\n");
	
	printf("after:  ");
	i = 0;
	while (i < size)
		printf("%02x ", dest[i++]);
	printf("\n");
	return 0;
}
*/