/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 10:02:06 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/26 11:13:24 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

/*
#include <stdio.h>
#include <assert.h>
#include <limits.h>
int main(void)
{
	assert(ft_isstrlen(""));
	assert(ft_isstrlen(""));
	assert(ft_isstrlen(""));
	assert(ft_isstrlen(""));

	assert(!ft_isstrlen(""));
	assert(!ft_isstrlen(""));
	assert(!ft_isstrlen(""));
	assert(!ft_isstrlen(""));
	assert(!ft_isstrlen(""));
	assert(!ft_isstrlen(""));
	assert(!ft_isstrlen(""'));
	assert(!ft_isstrlen(""));


	printf("all test passed\n");
	return (0);
}
*/