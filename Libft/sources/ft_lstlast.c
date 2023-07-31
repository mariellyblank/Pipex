/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:38:21 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:21:14 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Ft_lstlast() returns the last element of a linked list.
 * 
 * @param lst A pointer to the first element of a linked list.
 * 
 * @return The last element of the list.
 */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next != NULL)
		lst = lst->next;
	return (lst);
}
