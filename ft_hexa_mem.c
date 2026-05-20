/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_mem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 15:28:25 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/20 17:38:24 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_mem(char *str, int n)
{
	int	i;

	i = 0;
	while (str[n])
	{
		write(1, &str[n++], 1);
		i++;
	}
	return (i);
}

int	ft_hexa_mem(void *n)
{
	unsigned long	ptr;
	char			*hex_chars;
	char			*num;
	int				i;
	int				len;

	ptr = (long)n;
	if (!ptr)
		return (write(1, "(nil)", 5));
	num = malloc(19 * sizeof(char));
	if (!num)
		return (0);
	hex_chars = "0123456789abcdef";
	i = 18;
	num[i--] = '\0';
	while (ptr > 0)
	{
		num[i--] = hex_chars[ptr % 16];
		ptr /= 16;
	}
	num[i--] = 'x';
	num[i] = '0';
	len = print_mem(num, i);
	free(num);
	return (len);
}
