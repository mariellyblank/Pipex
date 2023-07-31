/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:40:32 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:33:36 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Iterate through a string, passing the index and the character to a function.
 * 
 * @param s The string to iterate through.
 * @param f The function to be applied to each character of the string.
 */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
