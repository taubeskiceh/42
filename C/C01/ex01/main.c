#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

static void	putnbr(int n)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648\n", 12);
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
	int			x;
	int			*p1;
	int			**p2;
	int			***p3;
	int			****p4;
	int			*****p5;
	int			******p6;
	int			*******p7;
	int			********p8;
	int			*********p9;

	x = 0;
	p1 = &x;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;
	ft_ultimate_ft(p9);
	putnbr(x);
	write(1, "\n", 1);
	return (0);
}
