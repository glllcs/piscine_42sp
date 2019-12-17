#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	printf("[Banana] = %d\n", ft_strlen("Banana"));
	printf("[42] = %d\n", ft_strlen("42"));
	printf("[] = %d\n", ft_strlen(""));
	return (0);
}
