#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	printf("[Olar] [Ola]\nstrcmp: %d | ft_strcmp: %d\n\n", strcmp("Olar","Ola"), ft_strcmp("Olar","Ola"));
	printf("[Ola] [Olar]\nstrcmp: %d | ft_strcmp: %d\n\n", strcmp("Ola","Olar"), ft_strcmp("Ola","Olar"));
	printf("[Ola] [Ola]\nstrcmp: %d | ft_strcmp: %d\n\n", strcmp("Ola","Ola"), ft_strcmp("Ola","Ola"));
	printf("[] [Alo]\nstrcmp: %d | ft_strcmp: %d\n\n", strcmp("","Alo"), ft_strcmp("","Alo"));
	printf("[Banana] [banana]\nstrcmp: %d | ft_strcmp: %d\n\n", strcmp("Banana","banana"), ft_strcmp("Banana","banana"));
	printf("[Olar] []\nstrcmp: %d | ft_strcmp: %d\n\n", strcmp("Olar",""), ft_strcmp("Olar",""));
	printf("[Olar] [Olas]\nstrcmp: %d | ft_strcmp: %d\n\n", strcmp("Olar","Olas"), ft_strcmp("Olar","Olas"));
	return (0);
}
