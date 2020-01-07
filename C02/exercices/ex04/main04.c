#include <string.h>
#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	char str[40];

	memset(str, '\0', sizeof(str));
	strcpy(str, "psieivjdfn");
	printf("%s : %d\n", str, ft_str_is_lowercase(str));
	strcpy(str, "fmkmfFddks");
	printf("%s : %d\n", str, ft_str_is_lowercase(str));
	strcpy(str, "");
	printf("%s : %d\n", str, ft_str_is_lowercase(str));
}
