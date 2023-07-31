/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:22:43 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:38:06 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The above function locates the last occurrence of a character in a string.
 * 
 * @param s The string to search.
 * @param c The character to search for.
 * 
 * @return The address of the last occurrence of the character c in the string s.
 */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	chtr;
	int		i;

	str = (void *)s;
	chtr = c;
	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == chtr)
		{
			return (&str[i]);
		}
		i--;
	}
	return (NULL);
}
