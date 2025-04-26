/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:10:23 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/26 10:15:08 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	while (dst_len < size && dst[dst_len])
		dst_len++;
	i = 0;
	if (size <= dst_len)
		return (size + src_len);
	while (i < size - dst_len - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}


#include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	int		size = 10;
	char	dst[size];


	size_t	reval = ft_strlcat(dst, argv[1], size);
	printf("src: %s\n", argv[1]);
	printf("dst: %s\n", dst);
	printf("return value: %zu\n", reval);
	return 0;
}
