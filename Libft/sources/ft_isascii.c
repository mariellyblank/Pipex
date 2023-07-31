/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:18:28 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:26:52 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * If the value of the argument is between 0 and 127, return 1, 
 * otherwise return 0
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if c is between 0 and 127, 0 otherwise.
 */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
