/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:18:46 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:20:13 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Add a new element to the beginning of a list.
 * 
 * @param lst A pointer to a pointer to a linked list.
 * @param new the new element to add to the list
 * 
 * @return A pointer to the first element of the list.
 */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
