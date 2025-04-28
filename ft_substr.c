/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:36:11 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/28 10:54:35 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = ft_calloc(len + 1, sizeof(char));
	if (sub == NULL)
		return (NULL);
	if (start < ft_strlen(s))
		ft_strlcpy(sub, s + start, len + 1);
	else
		*sub = '\0';
	return (sub);
}
