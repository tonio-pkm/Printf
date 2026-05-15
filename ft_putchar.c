/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 19:05:02 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/13 21:34:28 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}
