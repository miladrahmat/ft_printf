/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:43:51 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/10 18:40:31 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	print(char *str, va_list args)
{
	if (*str == 'd')
		ft_putdecimal(va_arg(args, int));
	else if (*str == 's')
		ft_putstr(va_arg(args, char *));
	else if (*str == 'u')
		ft_putunsign(va_arg(args, unsigned int));
	else if (*str == 'i')
		ft_putdecimal(va_arg(args, int));
	else if (*str == 'x')
		ft_puthexlower(va_arg(args, int));
	else if (*str == 'X')
		ft_puthexupper(va_arg(args, int));
	else if (*str == '%')
		ft_putchar('%');
}

int	ft_printf(const char *str, ...)
{
	va_list	args;

	va_start(args, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			print((char *)str, args);
		}
		else
			ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (0);
}

int	main(void)
{
	char	*str = "Hello";
	int		nbr = 500;

	ft_printf("%s for %Xth time\n", str, nbr);
	return (0);
}