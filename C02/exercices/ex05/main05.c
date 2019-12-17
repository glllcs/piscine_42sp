#include <string.h>
#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char str[40];

	memset(str, '\0', sizeof(str));
	strcpy(str, "DIFJDVNRV");
	printf("%s : %d\n", str, ft_str_is_uppercase(str));
	strcpy(str, "IJDSIFJi");
	printf("%s : %d\n", str, ft_str_is_uppercase(str));
	strcpy(str, "");
	printf("%s : %d\n", str, ft_str_is_uppercase(str));
}
