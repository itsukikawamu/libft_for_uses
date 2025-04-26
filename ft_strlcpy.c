/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:28:40 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/26 10:11:28 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

/*
#include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	int		size = 10;
	char	dst[size];


	size_t	reval = ft_strlcpy(dst, argv[1], size);
	printf("src: %s\n", argv[1]);
	printf("dst: %s\n", dst);
	printf("return value: %zu\n", reval);
	return 0;
}
*/