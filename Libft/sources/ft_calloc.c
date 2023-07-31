/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:21:09 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:26:29 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It allocates memory for nmem elements of size size
 * and then sets all of the memory to 0
 * 
 * @param nmem number of elements
 * @param size The size of the memory block, in bytes.
 * 
 * @return A pointer to the allocated memory.
 */
#include "libft.h"

void	*ft_calloc(size_t nmem, size_t size)
{
	char	*mem;
	size_t	i;

	mem = malloc (nmem * size);
	i = 0;
	if (!mem)
		return (NULL);
	while (i < nmem * size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
