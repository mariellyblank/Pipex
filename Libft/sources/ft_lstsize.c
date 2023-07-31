/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:26:57 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:22:00 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Count the number of elements in a linked list.
 * 
 * @param lst A pointer to the first element of a linked list.
 * 
 * @return The number of elements in the linked list.
 */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
