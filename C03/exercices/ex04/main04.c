#include <string.h>
#include <stdio.h>

char    *ft_strstr(char *str, char *to_find);

int		main(void)
{
	printf("[Veracidade] find:[cidade]\n");
	printf("strstr: %s\n", strstr("Veracidade","cidade"));
	printf("ft_strstr: %s\n", ft_strstr("Veracidade","cidade"));

	printf("\n[Cavalo] find:[]\n");
	printf("strstr: %s\n", strstr("Cavalo",""));
	printf("ft_strstr: %s\n", ft_strstr("Cavalo",""));

	printf("\n[] find:[abc]\n");
	printf("strstr: %s\n", strstr("","abc"));
	printf("ft_strstr: %s\n\n", ft_strstr("","abc"));

	printf("\n[Abobora] find:[bor]\n");
	printf("strstr: %s\n", strstr("Abobora","bor"));
	printf("ft_strstr: %s\n\n", ft_strstr("Abobora","bor"));

	printf("\n[Testefinal] find:[finale]\n");
	printf("strstr: %s\n", strstr("Testefinal","inale"));
	printf("ft_strstr: %s\n\n", ft_strstr("Testefinal","inale"));

	return 0;
}
