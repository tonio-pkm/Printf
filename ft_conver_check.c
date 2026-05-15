/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conver_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 20:07:43 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/15 17:09:31 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include <unistd.h>
int     putchar(char c);

int     putstr(char *str);

int	putnbr(int nb);

int     hexa_mem(void *n);

int     hexa_putnbr(int n, char m);

int	ft_conver_check(char c, va_list p)
{
	if (c == 'c')
		return(putchar(va_arg(p, int)));
	else if (c == 's')
		return(putstr(va_arg(p, char *)));
	else if (c == 'p')
		return (hexa_mem(va_arg(p, void *)));
	else if (c == 'd')
		return(putnbr(va_arg(p, int)));
	else if (c == 'i')
		return (putnbr(va_arg(p, int)));
	else if (c == 'u')
		return (putnbr(va_arg(p, int)));
	else if (c == 'x')
		return (hexa_putnbr(va_arg(p, int), c));
	else if (c == 'X')
		return (hexa_putnbr(va_arg(p, int), c));
	else if (c == '%')
		write(1, "%", 1);
	return (0);
}
