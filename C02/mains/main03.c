#include <string.h>
#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char str[40];

	memset(str, '\0', sizeof(str));
	strcpy(str, "3457834857348");
	printf("%s : %d\n", str, ft_str_is_numeric(str));
	strcpy(str, "4242424242.424242");
	printf("%s : %d\n", str, ft_str_is_numeric(str));
	strcpy(str, "");
	printf("%s : %d\n", str, ft_str_is_numeric(str));
}
