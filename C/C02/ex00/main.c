#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

static void	putstr(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}

static void	print_pair(char *label, char *s)
{
	putstr(label);
	putstr(s);
	write(1, "\n", 1);
}

int	main(void)
{
	char	dest1[32];
	char	dest2[5];
	char	dest3[16];

	char	src1[] = "hello";
	char	src2[] = "";
	char	src3[] = "42 Piscine!";

	ft_strcpy(dest1, src1);
	print_pair("src1:  ", src1);
	print_pair("dest1: ", dest1);

	ft_strcpy(dest2, src2);
	print_pair("src2:  ", src2);
	print_pair("dest2: ", dest2);

	ft_strcpy(dest3, src3);
	print_pair("src3:  ", src3);
	print_pair("dest3: ", dest3);

	return (0);
}
