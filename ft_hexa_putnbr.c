/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_putnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:17:04 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/15 17:08:45 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	hexa_putnbr(int n, char m)
{
	long	nb;
	char	*hexa_char;
	char	*num;
	int	i;
	int	i_ini;

	if (m == 'x')
		hexa_char = "0123456789abcdef";
	else if (m == 'X')
		hexa_char = "0123456789ABCDEF";
	nb = (long)n;
	i = 0;
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	i_ini = i;
	num = malloc((i + 1) * sizeof(char));
	num[i--] = '\0';
	while (nb > 0)
	{
		num[i--] = hexa_char[nb % 16];
		nb /= 16;
	}
	write(1, &num[0], i_ini);
	return (i_ini);
}
