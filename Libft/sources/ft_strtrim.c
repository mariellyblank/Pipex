/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:10:52 by mblank            #+#    #+#             */
/*   Updated: 2022/11/28 16:10:48 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It returns a copy of the string given as argument without whitespaces at 
 * the beginning or at the end of the string. 
 * Whitespaces are defined by the set argument
 * 
 * @param s1 The string to be trimmed.
 * @param set The characters to be trimmed.
 * 
 * @return A pointer to a new string that is a copy of the string given as 
 * argument, without whitespaces at the beginning or at the end of the string.
 */
#include "libft.h"

int	ft_start(const char *s1, const char *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

int	ft_end(const char *s1, const char *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	if (start >= end)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	ft_strlcpy (str, s1 + start, end - start + 1);
	return (str);
}
