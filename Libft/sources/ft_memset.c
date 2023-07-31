/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:39:24 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:28:42 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * takes a pointer to a memory location, a character, and a size_t as arguments,
 * and fills the first n bytes of the memory area pointed to by s 
 * with the constant byte c
 * 
 * @param s This is the pointer to the memory area to be filled.
 * @param c the character to fill the memory with
 * @param n the number of bytes to be set to the value c
 * 
 * @return A pointer to the memory area s.
 */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (s);
}
