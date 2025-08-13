#include <unistd.h>

void	ft_swap(int *a, int *b);

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
	c = (char)((n % 10) + '0');
	write(1, &c, 1);
}

int	main(void)
{
	int	a;
	int	b;

	a = 21;
	b = 84;
	write(1, "before: a=", 10);
	putnbr(a);
	write(1, " b=", 3);
	putnbr(b);
	write(1, "\n", 1);
	ft_swap(&a, &b);
	write(1, "after:  a=", 10);
	putnbr(a);
	write(1, " b=", 3);
	putnbr(b);
	write(1, "\n", 1);
	return (0);
}
