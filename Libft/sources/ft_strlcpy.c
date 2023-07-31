/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:40:28 by mblank            #+#    #+#             */
/*   Updated: 2022/11/28 15:46:33 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Copy the string pointed to by src, including the terminating null byte ('\0')
 * to the buffer pointed to by dst
 * 
 * @param dst This is the destination string.
 * @param src The string to be copied.
 * @param dst_size The size of the destination buffer.
 * 
 * @return The length of the string src.
 */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	i;

	i = 0;
	if (dst_size != 0)
	{
		while (src[i] != '\0' && i < (dst_size -1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
