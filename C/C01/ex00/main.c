#include <unistd.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int		x;
	int		t;
	int		o;
	char	out[3];

	x = 0;
	ft_ft(&x);
	t = (x / 10) + '0';
	o = (x % 10) + '0';
	out[0] = (char)t;
	out[1] = (char)o;
	out[2] = '\n';
	write(1, out, 3);
	return (0);
}
