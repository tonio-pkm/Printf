/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 21:34:53 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/20 16:02:03 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_len(long n, int is_neg)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len ++;
	}
	if (is_neg)
		len++;
	return (len);
}

int	ft_putnbr(int n)
{
	long	nb;
	char	c;
	int	is_neg;
	
	is_neg = 0;
	nb = (long)n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		is_neg = 1;
	}
	if (nb >= 10)
		ft_putnbr((int)(nb / 10));
	c = '0' + (nb % 10);
	write(1, &c, 1);
	return (num_len(nb, is_neg));
}
