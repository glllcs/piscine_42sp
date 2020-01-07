#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int main(void)
{
	int nb, power;

	nb = 2;
	power = 5;
	printf("(%d)ˆ(%d)\t\t= %d\n", nb, power, ft_recursive_power(nb,power));
		
	nb = 10;
	power = 5;
	printf("(%d)ˆ(%d)\t= %d\n", nb, power, ft_recursive_power(nb,power));
		
	nb = 6;
	power = 0;
	printf("(%d)ˆ(%d)\t\t= %d\n", nb, power, ft_recursive_power(nb,power));
		
	nb = 124;
	power = 1;
	printf("(%d)ˆ(%d)\t= %d\n", nb, power, ft_recursive_power(nb,power));
		
	nb = -5;
	power = 5;
	printf("(%d)ˆ(%d)\t= %d\n", nb, power, ft_recursive_power(nb,power));

	nb = -5;
	power = 4;
	printf("(%d)ˆ(%d)\t= %d\n", nb, power, ft_recursive_power(nb,power));

	nb = 5;
	power = -5;
	printf("(%d)ˆ(%d)\t= %d\n", nb, power, ft_recursive_power(nb,power));

	nb = 124;
	power = 10;
	printf("(%d)ˆ(%d)\t= %d\n", nb, power, ft_recursive_power(nb,power));
		
	return (0);
}
