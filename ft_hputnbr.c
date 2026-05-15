/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 15:28:25 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/15 16:14:48 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <aio.h>

int	hexa_mem(void *n)
{
	intptr_t	ptr;
	char	*hex_chars;
	char	*num;
	int	i;

	ptr = (intptr_t)n;
	num = malloc(19 * sizeof(char));
	if (!num)
		return (0);
	hex_chars = "0123456789abcdef";
	i = 19;
	num[i--] = '\0';
	while (ptr > 0)
	{
		num[i--] = hex_chars[ptr % 16];
		ptr /= 16;
	}
	num[i--] = 'x';
	num[i] = '0';
	write(1, &num[i], 19 - i);
	return (19 - 1);
}
