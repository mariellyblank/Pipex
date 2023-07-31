/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:39:20 by mblank            #+#    #+#             */
/*   Updated: 2022/11/28 16:52:33 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It takes a list, applies a function to each element of the list, and returns
 * new list with the
 * results of the function
 * 
 * @param lst the list to iterate over
 * @param f a function that takes a void pointer and returns a void pointer
 * @param del a function that will be used to free the content of the list
 * 
 * @return A new list with the content of the first list, 
 * each element of the list 
 * is passed as a parameter to the function f and the result is added to 
 * the new list
 */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*adress;

	if (!f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		adress = ft_lstnew(f(lst->content));
		if (!adress)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, adress);
		lst = lst->next;
	}
	return (new);
}
