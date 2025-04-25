/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 09:55:02 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/26 07:32:17 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0x00 <= c && c <= 0x7f)
		return (FT_ISASCII);
	return (0);
}

/*
#include <stdio.h>
int main(int argc, char* argv[])
{
	if(argc != 2)
		return (1);
	if (ft_isascii(argv[1][0]))
		printf("it is ascii.\n");
	else
		printf("it isn't ascii.\n");
	return (0);
}
*/