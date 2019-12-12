#include <stdio.h>

void	ft_putnbr(int n);
void	ft_putchar(char c);

int 	main(void)
{
	//printf("42");
	ft_putnbr(42);
	//printf(",,2147483647");
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	//printf(",,-2147483648");
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	//printf(",,-100");
	ft_putnbr(-100);
	ft_putchar('\n');
	//printf(",,890");
	ft_putnbr(890);
	ft_putchar('\n');
	//printf(",,3");
	ft_putnbr(3);
	ft_putchar('\n');
	//printf(",,-32767");
	ft_putnbr(-32767);
	ft_putchar('\n');
	//printf(",,0");
	ft_putnbr(0);
	ft_putchar('\n');
	//printf("");
	return 0;
}
