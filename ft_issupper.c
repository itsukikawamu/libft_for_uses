/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 10:54:42 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/26 07:37:52 by ikawamuk         ###   ########.fr       */
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
int main(int argc, char* argv[])
{
	if(argc != 2)
		return (1);
	if (ft_issupper(argv[1][0]))
		printf("it is supper.\n");
	else
		printf("it isn't supper.\n");
	return (0);
}
*/