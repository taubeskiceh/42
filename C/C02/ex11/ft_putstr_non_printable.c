/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altaube <altaube@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:56:59 by altaube           #+#    #+#             */
/*   Updated: 2025/08/13 15:57:14 by altaube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static char	hex_digit(int n)
{
	if (n < 10)
		return ((char)('0' + n));
	return ((char)('a' + (n - 10)));
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;
	char			x;

	while (*str)
	{
		c = (unsigned char)*str;
		if (c >= 32 && c <= 126)
			write(1, &c, 1);
		else
		{
			x = '\\';
			write(1, &x, 1);
			x = hex_digit((int)(c / 16));
			write(1, &x, 1);
			x = hex_digit((int)(c % 16));
			write(1, &x, 1);
		}
		str++;
	}
}
