/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:13:29 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:34:05 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function ft_strjoin() takes two strings as parameters and returns 
 * a new string that is the result of the concatenation of the two strings
 * 
 * @param s1 The first string to be joined.
 * @param s2 The string to be appended to the end of s1.
 * 
 * @return A pointer to a string.
 */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	y;
	char	*str;

	i = 0;
	y = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s1 || !s2 || !str)
		return (NULL);
	while (s1[i] != '\0')
	{	
		str[y] = s1[i];
		i++;
		y++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str[y] = s2[i];
		i++;
		y++;
	}
	str[y] = '\0';
	return (str);
}
