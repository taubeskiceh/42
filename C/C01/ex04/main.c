#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

/* kleine Hilfsfunktion: int mit write() ausgeben (inkl. negativ & INT_MIN) */
static void	putnbr(int n)
{
	char	c;

	// Sonderfall: kleinster 32-bit int (kann man nicht negieren)
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	// Negativ? Erst '-' ausgeben, dann positiv machen
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	// Höhere Stellen zuerst drucken (rekursiv)
	if (n >= 10)
		putnbr(n / 10);
	// Letzte Stelle (Einer) in ein Zeichen verwandeln: '0' + ziffer
	c = (char)('0' + (n % 10));
	write(1, &c, 1);
}

int	main(void)
{
	int	a;
	int	b;

	// Testwerte setzen: a = Dividend, b = Divisor (b != 0 vorausgesetzt)
	a = 42;
	b = 10;

	// Vorher: a und b anzeigen
	write(1, "before: a=", 10);
	putnbr(a);
	write(1, " b=", 3);
	putnbr(b);
	write(1, "\n", 1);

	// Aufruf: schreibt Quotient in *a und Rest in *b
	// (also: a = a / b;  b = a_alt % b)
	ft_ultimate_div_mod(&a, &b);

	// Nachher: a = Quotient, b = Rest
	write(1, "after:  a=", 10);
	putnbr(a);
	write(1, " b=", 3);
	putnbr(b);
	write(1, "\n", 1);
	return (0);
}
