#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int 	main(void)
{
	int a;
	int b;

	a = 42;
	b = 5;
	printf("a = %d ; b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d ; b = %d", a, b);
}
