/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:05:20 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/10 18:37:10 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthexlower(int n)
{
	char	res;
	char	*base;

	if (n == -2147483648)
	{
		write(1, "-0x80000000", 11);
		return ;
	}
	base = "0123456789abcdef";
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 16)
	{
		res = base[n % 16];
		ft_puthexlower(n / 16);
	}
	else
		res = base[n];
	ft_putchar(ft_tolower(res));
}