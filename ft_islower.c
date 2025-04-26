/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 10:57:24 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/26 10:39:15 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (FT_ISLOWER);
	return (0);
}

/*
#include <stdio.h>
#include <assert.h>
#include <limits.h>
int main(void)
{
	assert(ft_islower('a'));
	assert(ft_islower('z'));

	assert(!ft_islower('A'));
	assert(!ft_islower('Z'));
	assert(!ft_islower('0'));
	assert(!ft_islower('9'));
	assert(!ft_islower('/'));
	assert(!ft_islower(':'));
	assert(!ft_islower('@'));
	assert(!ft_islower('['));
	assert(!ft_islower('\''));
	assert(!ft_islower('{'));
	assert(!ft_islower(0));
	assert(!ft_islower(127));
	assert(!ft_islower(INT_MAX));
	assert(!ft_islower(INT_MIN));
	
	printf("all test passed\n");
	return (0);
}
*/