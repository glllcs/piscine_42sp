#include <string.h>
#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char str[40];

	memset(str, '\0', sizeof(str));
	strcpy(str, "So caracteres imprimiveis! 42");
	printf("%s : %d\n", str, ft_str_is_printable(str));
	strcpy(str, "Tem caracter nao imprimivel\n");
	printf("%s : %d\n", str, ft_str_is_printable(str));
	strcpy(str, "");
	printf("%s : %d\n", str, ft_str_is_printable(str));
}
