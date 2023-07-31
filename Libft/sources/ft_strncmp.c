/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:02:30 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:37:13 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It compares the first n characters of s1 and s2, and returns the difference 
 * between the first characters that differ
 * 
 * @param s1 The first string to be compared.
 * @param s2 The string to compare to.
 * @param n The maximum number of characters to compare.
 * 
 * @return The difference between the two strings.
 */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	dif;

	i = 0;
	dif = 0;
	while ((i < n) && !dif && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		dif = ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	if ((i < n) && !dif && ((s1[i] != '\0') || (s2[i] != '\0')))
	{
		dif = ((unsigned char) s1[i] - (unsigned char) s2[i]);
	}
	return (dif);
}
