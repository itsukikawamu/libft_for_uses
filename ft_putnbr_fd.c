/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 06:02:57 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/29 06:21:20 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	nb;
	int		div;

	nb = (long)n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	div = 1;
	while (nb / div >= 10)
		div *= 10;
	while (div > 0)
	{
		c = (nb / div) + '0';
		write(fd, &c, 1);
		nb %= div;
		div /= 10;
	}
}