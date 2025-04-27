/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:00:55 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/28 08:47:49 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		result;
	int		sign;

	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	sign = 1;
	if(ft_issign(nptr[i]))
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	result = 0;
	while (ft_isdigit(nptr[i]))
	{
		result = result * 10 + (nptr[i] - '0') * sign;
		i++;
	}
	return (result);
}

int	ft_issign(int c)
{
	if(c == '+' || c == '-')
		return (FT_ISSIGN);
	return (0);
}

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