/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:57:07 by mblank            #+#    #+#             */
/*   Updated: 2022/11/28 15:31:58 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It copies the bytes from src to dest, but if the two regions overlap, 
 * it copies the bytes in reverse order
 * 
 * @param dest is the destination array where the content is to be copied,
 *  type-casted to a void*.
 * @param src pointer to the source of data to be copied
 * @param n the number of bytes to copy
 * 
 * @return A pointer to the destination string.
 */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest_ptr;
	const char	*src_ptr;

	i = 0;
	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest_ptr <= src_ptr)
	{
		while (i < n)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	else if (dest_ptr > src_ptr)
	{
		dest_ptr += n;
		src_ptr += n;
		while (n--)
			*(--dest_ptr) = *(--src_ptr);
	}
	return (dest);
}
