/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 15:44:20 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/20 15:16:01 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	size_t	i;
	va_list	par;
	size_t	num_print;

	num_print = 0;
	va_start(par, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			num_print += ft_conver_check(str[i], par);
			//if (num_print != 0)
				i++;
		}
		else
		{
			write(1, &str[i++], 1);
			num_print++;
		}
	}
	va_end(par);
	return (num_print);
}
