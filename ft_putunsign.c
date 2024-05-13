/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:03:01 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/13 19:08:59 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	check_size(unsigned int n)
{
	unsigned int	temp;
	unsigned int	count;

	temp = n;
	count = 0;
	while (temp >= 10)
	{
		count++;
		temp = temp / 10;
	}
	return (count + 1);
}

int	ft_putunsign(unsigned int n)
{
	char	res;
	int		len;

	len = check_size(n);
	if (n >= 10)
	{
		res = n % 10 + '0';
		ft_putunsign(n / 10);
	}
	else
		res = n + '0';
	ft_putchar(res);
	return (len);
}
