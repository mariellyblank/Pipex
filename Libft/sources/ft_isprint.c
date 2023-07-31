/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:25:44 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:19:30 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * If the character is between 32 and 126, return 1, otherwise return 0.
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if the character is printable, 0 if not.
 */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
