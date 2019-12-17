#include <stdio.h>
#include <string.h>

int	ft_atoi(char *str);

int main(void)
{
	char str[100];
	strcpy(str,"  +  -+---+12345fd");
	printf("[%s]: %d\n", str, ft_atoi(str));
	strcpy(str,"\t\n\v\f\r---+++131231egerkorek");
	printf("[%s]: %d\n", str, ft_atoi(str));
	strcpy(str,"2147483647egerk65orek");
	printf("[%s]: %d\n", str, ft_atoi(str));
	strcpy(str,"   2147483649egerkorek");
	printf("[%s]: %d\n", str, ft_atoi(str));
	strcpy(str,"   ++--+-2147483648egerkorek");
	printf("[%s]: %d\n", str, ft_atoi(str));
	strcpy(str,"   ++--+-gerkorek");
	printf("[%s]: %d\n", str, ft_atoi(str));
	strcpy(str,"  g++--+-53453");
	printf("[%s]: %d\n", str, ft_atoi(str));

	return 0;
}
