#include <unistd.h>
#include <string.h>
#include <stdio.h>

char    *ft_strcpy(char *dest, char *src);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(void)
{
	char src[40];
	char dest[100];

//	memset(dest, '\0', sizeof(dest));
	ft_strcpy(src, "42 Sao Paulo");
	ft_putstr(src);
	ft_putchar('\n');

	ft_putstr(ft_strcpy(dest,"Federacao!!"));
	ft_putchar('\n');
	return(0);
}
