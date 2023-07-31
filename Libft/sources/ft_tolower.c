/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:36:22 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:39:51 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * If the character is uppercase, convert it to lowercase
 * 
 * @param c The character to be converted.
 * 
 * @return The lowercase version of the character.
 */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
