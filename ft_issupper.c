/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 10:54:42 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/26 10:56:59 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_issupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (FT_ISSUPPER);
	return (0);
}

/*
#include <stdio.h>
#include <assert.h>
#include <limits.h>
int main(void)
{
	assert(ft_issupper('A'));
	assert(ft_issupper('Z'));
	
	assert(!ft_issupper('a'));
	assert(!ft_issupper('z'));
	assert(!ft_issupper('0'));
	assert(!ft_issupper('9'));
	assert(!ft_issupper('/'));
	assert(!ft_issupper(':'));
	assert(!ft_issupper('@'));
	assert(!ft_issupper('['));
	assert(!ft_issupper('\''));
	assert(!ft_issupper('{'));
	assert(!ft_issupper(0));
	assert(!ft_issupper(127));
	assert(!ft_issupper(INT_MAX));
	assert(!ft_issupper(INT_MIN));
	
	printf("all test passed\n");
	return (0);
}
*/