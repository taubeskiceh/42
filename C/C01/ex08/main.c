#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

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
	int	a[10];

	a[0] = 5;
	a[1] = -2;
	a[2] = 42;
	a[3] = 0;
	a[4] = 7;
	a[5] = 7;
	a[6] = -100;
	a[7] = 3;
	a[8] = 9;
	a[9] = 1;

	print_array(a, 10);
	ft_sort_int_tab(a, 10);
	print_array(a, 10);
	return (0);
}
