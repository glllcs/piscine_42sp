#include <stdio.h>

int ft_is_prime(int nb);

void print_prime(int nb)
{
	if (ft_is_prime(nb))
		printf("%d eh primo!!!!\n", nb);
	else
		printf("%d nao eh primo.\n", nb);
}

int main(void)
{
	int nb;

	for (nb=0;nb<=50;nb++)
		if (ft_is_prime(nb) == 1)
			print_prime(nb);
	nb = -13;
	print_prime(nb);

	nb = 169;
	print_prime(nb);

	nb = 214748364;
	print_prime(nb);

	return (0);
}
