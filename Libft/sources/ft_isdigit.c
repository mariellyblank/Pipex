/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:01:52 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:17:49 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function ft_isdigit() checks if the passed character is a digit
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if c is a digit, 0 if not.
 */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
