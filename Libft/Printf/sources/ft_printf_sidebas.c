/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_sidebas.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:53:22 by mblank            #+#    #+#             */
/*   Updated: 2022/12/15 17:18:51 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

char	*ft_lenregr(long long n, char *str)
{
	if (n >= 10)
		str = ft_lenregr(n / 10, str);
	*str++ = (n % 10) + '0';
	*str = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	char	str[15];

	if (n < 0)
	{
		str[0] = '-';
		ft_lenregr(((long long)n * -1), &str[1]);
	}
	else
		ft_lenregr(n, str);
	return (ft_substr(str, 0, (ft_strlen(str))));
}

int	ft_putnbr(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = ft_putstr(num);
	free(num);
	return (len);
}

int	ft_printpercent(void)
{
	ft_putchar('%');
	return (1);
}
