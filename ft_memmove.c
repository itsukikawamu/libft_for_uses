/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:03:07 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/25 15:43:27 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dp;
	char	*tmp;

	dp = (char *)dest;
	tmp = ft_memcpy(tmp, src, n);
	dest = ft_memcopy(dest, src, n);
	return (dest);
}
