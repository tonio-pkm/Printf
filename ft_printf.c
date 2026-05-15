/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 15:44:20 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/15 17:10:07 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>

int     ft_conver_check(char c, va_list p);

int	ft_printf(char const *str, ... )
{
	size_t	i;
	va_list	par;

	va_start(par, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (ft_conver_check(str[i], par) != 0)
				i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	va_end(par);
	return (i);
}

int	main(void)
{
	int	x;
	int	*p;

	p = &x;
	#include <stdio.h>
	ft_printf("test printf %c %s %p %d %i %u %x %X %%", 'A', "string",(void *)p, -42, -42, 42, 42, 42);
	write(1,"\n", 1);
	printf("test real_printf %c %s %p %d %i %u %x %X %%", 'A', "string",(void *)p, -42, -42, 42, 42, 42);
}
