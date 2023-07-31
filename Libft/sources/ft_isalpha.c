/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:03:40 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:17:22 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function ft_isalpha() checks if the passed character is an alphabet or not
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if the character is alphabetic, 0 if not.
 */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
