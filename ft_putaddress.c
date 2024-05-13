/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:14:39 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/13 18:04:55 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptr_len(size_t n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

void	ft_putptr(uintptr_t n)
{
	if (n >= 16)
	{
		ft_putptr(n / 16);
		ft_putptr(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar((n % 16) + '0');
		else
			ft_putchar((n % 16) - 10 + 'a');
	}
}

int	ft_putaddress(size_t ptr)
{
	int	len;

	len = ptr_len(ptr);
	len += ft_putstr("0x");
	if (ptr == 0)
		len += ft_putchar('0');
	else
		ft_putptr(ptr);
	return (len);
}
