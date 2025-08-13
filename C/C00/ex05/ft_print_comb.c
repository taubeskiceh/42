/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altaube <altaube@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:46:14 by altaube           #+#    #+#             */
/*   Updated: 2025/08/13 11:46:26 by altaube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (!(a == '7' && b == '8' && c == '9'))
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}


*/#include <unistd.h>
#include <string.h>

void	verify_numbers(int hundred, int dicker, int unit);
void	print_numbers(int hundred, int dicker, int unit);

void	ft_print_comb(void)
{
	verify_numbers(0, 1, 2);
}

void	verify_numbers(int hundred, int dicker, int unit)
{
	while (hundred <= 7)
	{
		while (dicker <= 8)
		{
			while (unit <= 9)
			{
				print_numbers(hundred, dicker, unit);
				unit++;
				if (hundred != 7)
					write(1, ", ", 2);
			}
			unit = ++dicker + 1;
		}
		dicker = ++hundred;
	}
}

void	print_numbers(int hundred, int dicker, int unit)
{
	char	h;
	char	d;
	char	u;

	h = (char)(hundred + 48);
	d = (char)(dicker + 48);
	u = (char)(unit + 48);
	write(1, &h, 1);
	write(1, &d, 1);
	write(1, &u, 1);
}
/*
