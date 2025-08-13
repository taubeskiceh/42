#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

static void	putnbr(int n)
{
	char c;
	if (n == -2147483648) { write(1, "-2147483648", 11); return ; }
	if (n < 0) { write(1, "-", 1); n = -n; }
	if (n >= 10) putnbr(n / 10);
	c = (char)((n % 10) + '0');
	write(1, &c, 1);
}

int	main(void)
{
	int a;
	int b;
	int d;
	int m;

	a = 42;
	b = 10;
	ft_div_mod(a, b, &d, &m);
	write(1, "div=", 4); putnbr(d);
	write(1, " mod=", 5); putnbr(m);
	write(1, "\n", 1);
	return (0);
}
