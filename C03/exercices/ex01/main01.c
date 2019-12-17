#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	printf("[Olbar] [Ola] [2]\nstrncmp: %d | ft_strncmp: %d\n\n", strncmp("Olbar","Ola",2), ft_strncmp("Olbar","Ola",2));
	printf("[abc] [ABC] [4]\nstrncmp: %d | ft_strncmp: %d\n\n", strncmp("abc","ABC",4), ft_strncmp("abc","ABC",4));
	printf("[Or] [Ola] [0]\nstrncmp: %d | ft_strncmp: %d\n\n", strncmp("Or","Ola",0), ft_strncmp("Or","Ola",0));
	printf("[Olr] [Ola] [3]\nstrncmp: %d | ft_strncmp: %d\n\n", strncmp("Olr","Ola",3), ft_strncmp("Olr","Ola",3));
	printf("[] [Ola] [1]\nstrncmp: %d | ft_strncmp: %d\n\n", strncmp("","Ola",1), ft_strncmp("","Ola",1));
	printf("[42saopaula] [42saopaulo] [9]\nstrncmp: %d | ft_strncmp: %d\n\n", strncmp("42saopaula","42saopaulo",9), ft_strncmp("42saopaula","42saopaulo",9));
	return (0);
}
