/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:22:42 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/25 11:41:21 by ikawamuk         ###   ########.fr       */
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
