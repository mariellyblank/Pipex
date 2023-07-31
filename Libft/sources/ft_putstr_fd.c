/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:15:31 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:31:14 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Write the string s to the file descriptor fd
 * 
 * @param s The string to be printed.
 * @param fd file descriptor
 * 
 */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	return ;
}
