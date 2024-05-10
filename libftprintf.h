/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:49:03 by mrahmat-          #+#    #+#             */
/*   Updated: 2024/05/10 14:08:31 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putdecimal(int n);
void	ft_putstr(char *s);
void	ft_putunsign(unsigned int n);
void	ft_puthexupper(int n);
void	ft_puthexlower(int n);
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif