/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:36:13 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:39:59 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * If the character is lowercase, return the uppercase version
 * 
 * @param c The character to be converted.
 * 
 * @return The uppercase version of the character.
 */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
