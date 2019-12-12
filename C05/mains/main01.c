#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int i;
	for (i=-1; i<=13; i++)
		printf("%d!\t= %d\n", i, ft_recursive_factorial(i));
	return (0);
}
