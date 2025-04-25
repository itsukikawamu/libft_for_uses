/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 10:57:24 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/26 07:34:12 by ikawamuk         ###   ########.fr       */
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
int main(int argc, char* argv[])
{
	if(argc != 2)
		return (1);
	if (ft_islower(argv[1][0]))
		printf("it is lower.\n");
	else
		printf("it isn't lower.\n");
	return (0);
}
*/