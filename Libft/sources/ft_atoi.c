/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:15:56 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:16:15 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It takes a string, and returns the integer value of that string
 * 
 * @param nptr This is the string that is to be converted to an integer.
 * 
 * @return the integer value of the string passed as argument.
 */
#include "libft.h"

int	ft_atoi(const char *nptr)

{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t'
			|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r'))
		i++;
	while (nptr[i] != '\0' && (nptr[i] == '-' || nptr[i] == '+'))
	{
		if (nptr[i + 1] == '-' || nptr[i + 1] == '+')
			return (0);
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = nptr[i] - '0' + result * 10;
		i++;
	}
	return (result * sign);
}
