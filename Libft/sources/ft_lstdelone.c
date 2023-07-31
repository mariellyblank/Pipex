/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:22:21 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:42:58 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Delete a linked list node
 * 
 * @param lst The list to be deleted.
 * @param del pointer to a function that takes a void pointer and returns nothing
 * 
 * @return void
 */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (del)
		del (lst->content);
	free (lst);
}
