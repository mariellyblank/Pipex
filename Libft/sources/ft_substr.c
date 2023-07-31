/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:02:52 by mblank            #+#    #+#             */
/*   Updated: 2023/07/23 09:28:50 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * If the string is longer than the length, return a substring of the string 
 * from the start index to the end of the string, otherwise return a substring 
 * of the string from the start index to the length.
 * 
 * @param s The string to be cut.
 * @param start The starting index of the substring.
 * @param len the maximum number of characters to copy
 * 
 * @return A pointer to a substring of the string pointed to by s.
 */
#include "libft.h"

char	*ft_substr(char const *s, int start, int len)
{
	int		i;
	char	*str1;

	i = 0;
	str1 = (char *)malloc(sizeof(char));
	if (!s || !str1)
		return (NULL);
	if (start > ft_strlen(s) || len == 0)
	{
		str1 = malloc(1);
		*str1 = '\0';
		return (str1);
	}
	if (ft_strlen(s) - start >= len)
		str1 = (char *)malloc(sizeof(char) * (len + 1));
	else
		str1 = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	while (s[start] && i < len && start < ft_strlen(s))
	{
		str1[i] = s[start];
		i++;
		start++;
	}
	str1[i] = '\0';
	return (str1);
}
