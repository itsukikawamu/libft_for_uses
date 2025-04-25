/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:37:38 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/26 07:38:04 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isxdigit(int c)
{
	if (('0' <= c && c <= '9') || ('a' <= c && c <= 'f'))
		return (FT_ISXDIGIT);
	return (0);
}


/*
#include <stdio.h>
int main(int argc, char* argv[])
{
	if(argc != 2)
		return (1);
	if (ft_isxdigit(argv[1][0]))
		printf("it is xdigit.\n");
	else
		printf("it isn't xdigit.\n");
	return (0);
}
*/