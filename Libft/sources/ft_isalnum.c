/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:13:03 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:17:14 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It returns 1 if the character is a digit or a letter, and 0 otherwise
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if the character is alphanumeric, 0 if not.
 */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9' ) || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
