/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 04:31:25 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/25 07:26:51 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (ft_ISalpha);
	return (0);
}

#include <ctype.h>
#include <stdio.h>
#include <assert.h>
int main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	char c = argv[1][0];
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
}
