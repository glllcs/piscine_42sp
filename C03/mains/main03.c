#include <stdio.h>
#include <string.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char str[40]="Origem";
	char str1[20]="Destino";
	char str2[20]="Destino";
	char str3[20]="Destino";
	char str01[20]="Destino";
	char str02[20]="Destino";
	char str03[20]="Destino";
	int i;

	i=7;
	printf("[%s] [%s] [%d]\n", str, str1, i);
	printf("strncat: %s\n", strncat(str01,str,i));
	printf("ft_strncat: %s\n\n", ft_strncat(str1,str,i));

	i=2;
	printf("[%s] [%s] [%d]\n", str, str2, i);
	printf("strncat: %s\n", strncat(str02,str,i));
	printf("ft_strncat: %s\n\n", ft_strncat(str2,str,i));
	
	i=20;
	printf("[%s] [%s] [%d]\n", str, str3, i);
	printf("strncat: %s\n", strncat(str03,str,i));
	printf("ft_strncat: %s\n\n", ft_strncat(str3,str,i));

	return 0;
}
