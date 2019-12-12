#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 42;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d\n", a, b, div); 
	printf("%d %% %d = %d\n\n", a, b, mod); 
	a = -125;
	b = 37;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d\n", a, b, div); 
	printf("%d %% %d = %d\n\n", a, b, mod); 
	a = 0;
	b = 54;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d\n", a, b, div); 
	printf("%d %% %d = %d\n\n", a, b, mod); 
	return (0);
}
