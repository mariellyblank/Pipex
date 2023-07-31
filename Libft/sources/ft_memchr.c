/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:18:33 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:22:44 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It searches for the first occurrence of the character c (an unsigned char) in 
 * the first n bytes of
 * the string pointed to, by the argument str
 * 
 * @param s The string to search.
 * @param c The character to search for.
 * @param n The number of bytes to be searched
 * 
 * @return The address of the first occurrence of the character c in the first 
 * n bytes of the string pointed to by s.
 */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*chr;

	i = 0;
	chr = (unsigned char *)s;
	while (i < n)
	{
		if (chr[i] == (unsigned char)c)
			return (&chr[i]);
		i++;
	}
	return (NULL);
}
