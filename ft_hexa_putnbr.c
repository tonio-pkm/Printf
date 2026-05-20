/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_putnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:17:04 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/20 16:22:54 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*hexa_char(char c)
{
	char	*str;

	if (c == 'x')
	{
		str = "0123456789abcdef";
		return (str);
	}
	else if (c == 'X')
	{
		str = "0123456789ABCDEF";
		return (str);
	}
	return (0);
}

static int	num_len(unsigned long n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	ft_hexa_putnbr(unsigned int n, char m)
{
	char	*num;
	char	*hex;
	int		i;
	int		len;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	hex = hexa_char(m);
	i = num_len(n);
	len = num_len(n);
	num = malloc((len + 1) * sizeof(char));
	num[i--] = '\0';
	while (n > 0)
	{
		num[i--] = hex[n % 16];
		n /= 16;
	}
	write(1, &num[i + 1], len);
	free(num);
	return (len);
}
