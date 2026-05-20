/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:38:25 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/20 14:38:28 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <aio.h>
# include <stdio.h>

int	ft_printf(char const *str, ...);

int	ft_conver_check(char c, va_list p);

int	ft_hexa_putnbr(int n, char m);

int	ft_hexa_mem(void *n);

int	ft_putchar(char c);

int	ft_putstr(char *str);

int	ft_putnbr(int n);

int	ft_uns_putnbr(unsigned long n);

#endif
