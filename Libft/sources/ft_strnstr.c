/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:35:33 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:37:48 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It searches for the first occurrence of the string little in the string big,
 * but only up to len characters
 * 
 * @param big the string to search in
 * @param little the string to search for
 * @param len the maximum number of characters to search
 * 
 * @return A pointer to the first occurrence of the substring little in the 
 * string big, or NULL if the substring is not found.
 */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		y = 0;
		while (little[y] != '\0')
		{
			if (big[i + y] == little[y] && (size_t)(i + y) < len)
				y++;
			else
				break ;
		}
		if (little[y] == '\0')
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
