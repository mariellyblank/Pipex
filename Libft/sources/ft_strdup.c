/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:51:59 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:33:24 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It copies the string s into a new string, and returns a pointer 
 * to the new string
 * 
 * @param s The string to be copied.
 * 
 * @return A pointer to a new string that is a duplicate of the string s.
 */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str2;
	int		i;
	int		size;

	size = 0;
	i = 0;
	while (s[size])
		size++;
	str2 = malloc(sizeof(char) * (size + 1));
	if (!str2)
		return (NULL);
	while (i < size)
	{
		str2[i] = s[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
