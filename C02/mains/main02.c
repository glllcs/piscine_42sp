#include <string.h>
#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char str[40];

	memset(str, '\0', sizeof(str));
	strcpy(str, "FeijaoEmCimaDoArroz");
	printf("%s : %d\n", str, ft_str_is_alpha(str));
	strcpy(str, "Feijao 42 em cima do arroz");
	printf("%s : %d\n", str, ft_str_is_alpha(str));
	strcpy(str, "");
	printf("%s : %d\n", str, ft_str_is_alpha(str));
}
