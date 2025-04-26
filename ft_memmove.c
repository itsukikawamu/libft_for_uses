/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:03:07 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/26 09:43:34 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d < s)
		ft_memcpy(d, s, n);
	else
	{
		while (0 < n--)
			d[n] = s[n];
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

	ft_memset(dest, 0xff, size);
	ft_memmove(dest, src, n);
	
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