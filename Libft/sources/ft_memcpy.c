/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:38:05 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:23:38 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Copy n bytes from memory area src to memory area dest
 * 
 * @param dest This is the destination array where the content is to be copied, 
 * type-casted to a pointer.
 * @param src The source string.
 * @param n the number of bytes to copy
 * 
 * @return A pointer to the destination string.
 */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest_ptr;
	const char	*src_ptr;

	i = 0;
	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
	if (!dest_ptr && !src_ptr)
		return (NULL);
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}
