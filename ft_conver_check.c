/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conver_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 20:07:43 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/20 17:17:52 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conver_check(char c, va_list p)
{
	if (c == 'c')
		return (ft_putchar(va_arg(p, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(p, char *)));
	else if (c == 'p')
		return (ft_hexa_mem(va_arg(p, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(p, int)));
	else if (c == 'u')
		return (ft_uns_putnbr(va_arg(p, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_hexa_putnbr(va_arg(p, unsigned int), c));
	else if (c == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}
