/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:49:03 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/14 13:09:07 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>
# include <stdint.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putdecimal(int n);
int	ft_putstr(char *s);
int	ft_putunsign(unsigned int n);
int	ft_printhex(unsigned int n, char format);
int	ft_putaddress(size_t ptr);

#endif