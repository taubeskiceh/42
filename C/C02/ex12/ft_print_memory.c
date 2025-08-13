/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altaube <altaube@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:59:18 by altaube           #+#    #+#             */
/*   Updated: 2025/08/13 15:59:36 by altaube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static char	hex_digit(unsigned int n)
{
	if (n < 10)
		return ((char)('0' + n));
	return ((char)('a' + (n - 10)));
}

static void	print_hex_n(unsigned long n, int width)
{
	char	buf[16];
	int		i;

	i = 0;
	while (i < width)
	{
		buf[width - 1 - i] = hex_digit((unsigned int)(n & 0xF));
		n >>= 4;
		i++;
	}
	write(1, buf, width);
}

static void	print_hex_byte(unsigned char b)
{
	char	out[2];

	out[0] = hex_digit((unsigned int)(b >> 4));
	out[1] = hex_digit((unsigned int)(b & 0xF));
	write(1, out, 2);
}

static void	print_line(unsigned char *p, unsigned int len)
{
	unsigned int	i;
	char			space;

	print_hex_n((unsigned long)p, 16);
	write(1, ": ", 2);
	i = 0;
	space = ' ';
	while (i < 16)
	{
		if (i < len)
			print_hex_byte(p[i]);
		else
			write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, &space, 1);
		i++;
	}
	i = 0;
	while (i < len)
	{
		if (p[i] >= 32 && p[i] <= 126)
			write(1, &p[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int		i;
	unsigned int		rem;
	unsigned char		*p;

	i = 0;
	p = (unsigned char *)addr;
	while (i < size)
	{
		rem = size - i;
		if (rem > 16)
			rem = 16;
		print_line(p + i, rem);
		i += rem;
	}
	return (addr);
}
