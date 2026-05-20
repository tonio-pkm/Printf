/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 19:05:02 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/20 15:00:14 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;
	int	len;
	if (!str)
		return (write(1, "(null)", 6));
	i = 0;
	len = 0;
	while (str[i])
	{
		write(1, &str[i++], 1);
		len++;
	}
	return (len);
}
