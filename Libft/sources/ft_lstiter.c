/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:26:52 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:21:02 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Iterate through a linked list and apply a function to each element
 * 
 * @param lst A pointer to the first element of a linked list.
 * @param f The function that will be applied to each element of the list.
 * 
 * @return Nothing.
 */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
