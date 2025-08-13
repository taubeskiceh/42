#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

static void	putnbr(int n)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		putnbr(n / 10);
	c = (char)('0' + (n % 10));
	write(1, &c, 1);
}

static void	print_array(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		putnbr(tab[i]);
		if (i < size - 1)
			write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	int	a[5];
	int	b[6];

	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;
	a[4] = 5;
	print_array(a, 5);
	ft_rev_int_tab(a, 5);
	print_array(a, 5);

	b[0] = -3;
	b[1] = 0;
	b[2] = 7;
	b[3] = 7;
	b[4] = 10;
	b[5] = 42;
	print_array(b, 6);
	ft_rev_int_tab(b, 6);
	print_array(b, 6);
	return (0);
}
