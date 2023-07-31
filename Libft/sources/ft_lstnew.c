/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:01:46 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:21:44 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Create a new list node with the given content and return a pointer to it.
 * 
 * @param content the content of the new list
 * 
 * @return A pointer to a new list.
 */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}
