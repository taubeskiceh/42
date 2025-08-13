
#include <unistd.h>

int		ft_strlen(char *str);

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

int	main(void)
{
	putnbr(ft_strlen("Hello"));
	write(1, "\n", 1);
	putnbr(ft_strlen(""));
	write(1, "\n", 1);
	putnbr(ft_strlen("42 piscine"));
	write(1, "\n", 1);
	return (0);
}
