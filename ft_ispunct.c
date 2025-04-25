/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:03:32 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/26 07:38:21 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ispunct(int c)
{
	if (ft_isprint(c) && !ft_isalnum(c) && c != ' ')
		return (FT_ISPUNCT);
	return (0);
}

/*
#include <stdio.h>
int main(int argc, char* argv[])
{
	if(argc != 2)
		return (1);
	if (ft_ispunctuation(argv[1][0]))
		printf("it is punctuation.\n");
	else
		printf("it isn't punctuation.\n");
	return (0);
}
*/