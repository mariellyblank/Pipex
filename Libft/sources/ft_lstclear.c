/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:12:33 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:42:28 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It takes a pointer to a pointer to a linked list, and a pointer to a function
 * that takes a void pointer and returns nothing, and deletes the linked list 
 * and sets the pointer to NULL
 * 
 * @param lst A pointer to the first element of a linked list.
 * @param del a pointer to a function that takes a single argument and 
 * returns nothing.
 */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*clear;

	while (lst && *lst)
	{
		clear = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = clear;
	}
	lst = NULL;
}
