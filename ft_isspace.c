/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:22:42 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/26 10:54:28 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if (c == ' ')
		return (FT_ISSPACE);
	if (c == '\f')
		return (FT_ISSPACE);
	if (c == '\n')
		return (FT_ISSPACE);
	if (c == '\r')
		return (FT_ISSPACE);
	if (c == '\t')
		return (FT_ISSPACE);
	if (c == '\v')
		return (FT_ISSPACE);
	return (0);
}

/*
#include <stdio.h>
#include <assert.h>
#include <limits.h>
int main(void)
{
	assert(ft_isspace(' '));
	assert(ft_isspace('\f'));
	assert(ft_isspace('\n')); 
	assert(ft_isspace('\r')); 
	assert(ft_isspace('\t'));  
	assert(ft_isspace('\v'));  
	
	assert(!ft_isspace('a'));
	assert(!ft_isspace('z'));
	assert(!ft_isspace('A'));
	assert(!ft_isspace('Z'));
	assert(!ft_isspace('0'));
	assert(!ft_isspace('9'));
	assert(!ft_isspace('/'));
	assert(!ft_isspace(':'));
	assert(!ft_isspace('@'));
	assert(!ft_isspace('['));
	assert(!ft_isspace('\''));
	assert(!ft_isspace('{'));
	assert(!ft_isspace(0));
	assert(!ft_isspace(127));
	assert(!ft_isspace(INT_MAX));
	assert(!ft_isspace(INT_MIN));
	
	printf("all test passed\n");
	return (0);
}
*/