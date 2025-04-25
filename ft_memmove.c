/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:03:07 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/25 12:20:10 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	char	*dp;
	char	*tmp;

	dp = (char *)dest;
	tmp = memcpy(tmp, src, n);
	dest = memcopy(dest, src, n);
	return (dest);
}
