# ex00 - ft_putchar
# ex01 - ft_print_alphabet
# ex02 - ft_print_reverse_alphabet
# ex03 - ft_print_numbers.c
# ex04 - 
# ex05 - 
# ex06 -
# ex07 - 
# ex08 - 
-----------------------------------------------------------------------------------------------------
# ft_putchar 
Ein minimalistisches c-Programm, das Anfänger rätselhaft macht, in eine Datei mit dem Namen a.c schreiben und a.out mit gcc a.c && ./a.out

#include <unistd.h>

void	ft_putchar(char c)                  // void because the function does not return any value, it writes directly, char is the type of the variable c that is given as parameter to the function ft_putchar by the main function.
{
	write(1, &c, 1);			                 // ssize_t write(int fd, const void *buf, size_t count); or in human language: write count letters of buf (which is a pointer) to fd (if fd = 1 this is your terminal, stdout)
}

int	main(void) {
	ft_putchar(42);				                        // will print a star
	// ft_putchar(42 + '0');	                   // will only print 4
	// ft_putchar("4");			                    // will not work, you are using " instead of ', so C language think it is a char array.
	return 0;
}

https://man7.org/linux/man-pages/man2/write.2.html

-----------------------------------------------------------------------------------------------------
# ft_print_alphabet 












# ft_print_reverse_alphabet



# ft_print_numbers.c


