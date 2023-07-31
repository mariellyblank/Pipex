/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:55:36 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:28:13 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * compares the first n bytes of memory area s1 against the first n bytes of 
 * memory area s2
 * 
 * @param s1 This is the first string to be compared.
 * @param s2 The string to compare to.
 * @param n The number of bytes to compare.
 * 
 * @return The difference between the two strings.
 */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (0);
}
