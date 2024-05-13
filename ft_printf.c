/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:43:51 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/13 19:11:24 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printer(const char format, va_list args)
{
	int				len;
	unsigned int	num;

	len = 0;
	if (format == 'd' || format == 'i')
		len = ft_putdecimal(va_arg(args, int));
	else if (format == 's')
		len = ft_putstr(va_arg(args, char *));
	else if (format == 'c')
		len = ft_putchar(va_arg(args, int));
	else if (format == 'u')
	{
		num = va_arg(args, unsigned int);
		len = ft_putunsign(num);
	}
	else if (format == 'x')
		len = ft_printhex(va_arg(args, int), format);
	else if (format == 'X')
		len = ft_printhex(va_arg(args, int), format);
	else if (format == 'p')
		len = ft_putaddress(va_arg(args, size_t));
	else if (format == '%')
		len = ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		check;

	len = 0;
	va_start(args, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			check = printer(*str, args);
			if (check == -1)
				return (-1);
			len += check;
		}
		else
		{
			ft_putchar(*str);
			len++;
		}
		str++;
	}
	va_end(args);
	return (len);
}
/* 
#include <stdio.h>
int	main(void)
{
	unsigned int	nbr = -1;

	ft_printf("%u\n", nbr);
	printf("%d\n", printf("%u\n", nbr));
	return (0);
} */