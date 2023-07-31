/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:49:26 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:19:53 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It adds a new element to the end of a linked list
 * 
 * @param lst A pointer to a pointer to a linked list.
 * @param new The new element to add to the list.
 */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*add;

	if (lst)
	{
		if (!*lst)
			*lst = new;
		else
		{
			add = ft_lstlast(*(lst));
			add->next = new;
		}
	}
}
