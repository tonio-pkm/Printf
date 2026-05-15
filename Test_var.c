/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test_var.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgarci <antgarci@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 18:29:36 by antgarci          #+#    #+#             */
/*   Updated: 2026/05/13 18:52:56 by antgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
int	check_add_even(int par)
{
	if (par % 2 == 0)
		return (par);
	return (0);
}
int	add(int n, ... )
{
	va_list	par;
	int	i;
	int	suma;

	va_start(par, n);
	i = 0;
	suma = 0;
	while (i < n)
	{
		suma += check_add_even(va_arg(par, int));
		i++;
	}
	va_end(par);
	return (suma);
}
int	main()
{
	#include <stdio.h>
	printf("%d", add(4, 1, 2, 3, 4));
}
