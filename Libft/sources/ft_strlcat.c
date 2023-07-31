/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:32:45 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:34:58 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It copies the string src to the end of dst, but will not exceed 
 * size characters, and will always NULL-terminate dst (unless size is 0)
 * 
 * @param dst This is the destination string.
 * @param src The string to be appended.
 * @param size the size of the destination buffer
 * 
 * @return The length of the string it tried to create in dst.
 */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;

	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	while (src[src_len] && (src_len + dst_len +1) < size)
	{
		dst[dst_len + src_len] = src[src_len];
		src_len++;
	}
	if (dst_len < size)
		dst[src_len + dst_len] = '\0';
	return (dst_len + ft_strlen(src));
}
