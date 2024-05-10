/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:03:01 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/10 14:03:46 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putunsign(unsigned int n)
{
	char	res;

	if (n >= 10)
	{
		res = (n % 10) + '0';
		ft_putunsign(n / 10);
	}
	else
		res = (n % 10) + '0';
	ft_putchar(res);
}
