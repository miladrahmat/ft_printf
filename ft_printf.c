/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:43:51 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/14 11:47:54 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printer(const char format, va_list args)
{
	int				len;

	len = 0;
	if (format == 'd' || format == 'i')
		len += ft_putdecimal(va_arg(args, int));
	else if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format == 'u')
		len += ft_putunsign(va_arg(args, unsigned int));
	else if (format == 'x')
		len += ft_printhex(va_arg(args, int), format);
	else if (format == 'X')
		len += ft_printhex(va_arg(args, int), format);
	else if (format == 'p')
		len += ft_putaddress(va_arg(args, size_t));
	else if (format == '%')
		len += ft_putchar('%');
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
			check = printer(*str++, args);
			if (check == -1)
				return (-1);
			len += check;
		}
		else
		{
			if (ft_putchar(*str++) == -1)
				return (-1);
			len++;
		}
	}
	va_end(args);
	return (len);
}
/* 
#include <stdio.h>
int	main(void)
{
	//unsigned int	nbr = -1;

	printf("%d\n\n", ft_printf("%p\n", ""));
	printf("%d\n", printf("%p\n", ""));
	return (0);
} */