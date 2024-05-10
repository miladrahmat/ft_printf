/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:53:16 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/10 14:14:12 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthexupper(int n)
{
	char	res;
	char	*base;

	if (n == -2147483648)
	{
		write(1, "-0X80000000", 11);
		return ;
	}
	base = "0123456789ABCDEF";
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 16)
	{
		res = base[n % 16];
		ft_puthexupper(n / 16);
	}
	else
		res = base[n % 16];
	ft_putchar(ft_toupper(res));
}
