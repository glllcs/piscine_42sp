#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
	int n;

	n = 4;
	printf("sqrt(%d) = %d\n", n, ft_sqrt(n));

	n = 144;
	printf("sqrt(%d) = %d\n", n, ft_sqrt(n));

	n = 10000;
	printf("sqrt(%d) = %d\n", n, ft_sqrt(n));

	n = 82;
	printf("sqrt(%d) = %d\n", n, ft_sqrt(n));

	n = -4;
	printf("sqrt(%d) = %d\n", n, ft_sqrt(n));

	n = 2147395600;
	printf("sqrt(%d) = %d\n", n, ft_sqrt(n));

	return (0);
}
