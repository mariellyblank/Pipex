/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:26:09 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:16:36 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It sets the first n bytes of the memory area pointed to by s to zero
 * 
 * @param s This is the pointer to the memory area to be filled.
 * @param n The number of bytes to be set to zero.
 */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
