/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:13:12 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/20 18:06:21 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_uns_putnbr(unsigned int n)
{
	char	c;

	if (n >= 10)
		ft_uns_putnbr(n / 10);
	c = '0' + (n % 10);
	write(1, &c, 1);
	return (num_len(n));
}
