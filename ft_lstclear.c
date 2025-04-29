/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:37:52 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/29 11:52:49 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*head;

	if (!*lst)
	{
		lst = NULL;
		return ;
	}
	while (*lst)
	{
		head = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(head, del);
	}
	lst = NULL;
}