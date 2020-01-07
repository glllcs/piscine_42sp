#include <stdio.h>

int ft_is_prime(int nb);
int ft_find_next_prime(int nb);

void print_nxt_prime(int nb)
{
	int next;

	next = ft_find_next_prime(nb);
	if (next == nb)
		printf("%d eh primo.\n", nb);
	else
		printf("%d nao eh primo, mas %d eh.\n", nb, next);
}

int main(void)
{
	int nb;

	nb = 13;
	print_nxt_prime(nb);

	nb = 45;
	print_nxt_prime(nb);

	nb = -13;
	print_nxt_prime(nb);

	nb = 100;
	print_nxt_prime(nb);

	nb = 300;
	print_nxt_prime(nb);

	nb = 104600;
	print_nxt_prime(nb);

	nb = 2147483629;
	print_nxt_prime(nb);

	return (0);
}
