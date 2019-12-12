#include <stdio.h>

int	ft_fibonacci(int index);

int main(void)
{
	int n;

	n = 0;
	printf("indice: %d = %d\n", n, ft_fibonacci(n));

	n = 1;
	printf("indice: %d = %d\n", n, ft_fibonacci(n));

	n = 2;
	printf("indice: %d = %d\n", n, ft_fibonacci(n));

	n = 5;
	printf("indice: %d = %d\n", n, ft_fibonacci(n));

	n = 9;
	printf("indice: %d = %d\n", n, ft_fibonacci(n));

	n = 19;
	printf("indice: %d = %d\n", n, ft_fibonacci(n));

	n = 23;
	printf("indice: %d = %d\n", n, ft_fibonacci(n));

	n = 46;
	printf("indice: %d = %d\n", n, ft_fibonacci(n));

	n = 47;
	printf("indice: %d = %d\n", n, ft_fibonacci(n));

	n = -6;
	printf("indice: %d = %d\n", n, ft_fibonacci(n));

	return (0);
}
