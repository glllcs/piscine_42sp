#include <string.h>
#include <stdio.h>

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char str[50]="Adicao";
	char str1[50]="Origem";
	char str01[50]="Origem";
	char str2[50]="Origem";
	char str02[50]="Origem";
	char str3[50]="Origem";
	char str03[50]="Origem";
	char str4[50]="Origem";
	char str04[50]="Origem";
	char str5[50]="";
	char str05[50]="";
	unsigned int i;

	i = 4;
	printf("[%s] [%s], size = %u\n", str1, str, i);
	printf("ft_strlcat return : %u\n", ft_strlcat(str1, str, i));
	printf("[%s]\n\n", str1);
	printf("strlcat return : %lu\n", strlcat(str01, str, i));
	printf("[%s]\n\n", str01);

	i = 6;
	printf("[%s] [%s], size = %u\n", str2, str, i);
	printf("ft_strlcat return : %u\n", ft_strlcat(str2, str, i));
	printf("[%s]\n\n", str2);
	printf("strlcat return : %lu\n", strlcat(str02, str, i));
	printf("[%s]\n\n", str02);

	i = 15;
	printf("[%s] [%s], size = %u\n", str3, str, i);
	printf("ft_strlcat return : %u\n", ft_strlcat(str3, str, i));
	printf("[%s]\n\n", str3);
	printf("strlcat return : %lu\n", strlcat(str03, str, i));
	printf("[%s]\n\n", str03);

	i = 12;
	printf("[%s] [%s], size = %u\n", str4, str, i);
	printf("ft_strlcat return : %u\n", ft_strlcat(str4, str, i));
	printf("[%s]\n\n", str4);
	printf("strlcat return : %lu\n", strlcat(str04, str, i));
	printf("[%s]\n\n", str04);


	i = 12;
	printf("[%s] [%s], size = %u\n", str5, str, i);
	printf("ft_strlcat return : %u\n", ft_strlcat(str5, str, i));
	printf("[%s]\n\n", str5);
	printf("strlcat return : %lu\n", strlcat(str05, str, i));
	printf("[%s]\n\n", str05);
	return 0;
}
