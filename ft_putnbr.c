/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 21:34:53 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/15 15:30:38 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	putnbr(int n)
{
        long    nb;
        char    c;
	int	i;

        nb = (long)n;
        if (nb < 0)
        {
                write(1, "-", 1);
                nb = -nb;
        }
	i = 0;
        if (nb >= 10)
	{
                putnbr((int)(nb / 10));
        	i++;
	}
	c = '0' + (nb % 10);
        write(1, &c, 1);
	return (i);
}

