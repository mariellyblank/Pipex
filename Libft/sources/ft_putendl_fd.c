/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:23:42 by mblank            #+#    #+#             */
/*   Updated: 2022/11/25 16:26:07 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * "Write the string s to the file descriptor fd, followed by a newline."
 * 
 * @param s The string to be printed.
 * @param fd file descriptor
 */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
