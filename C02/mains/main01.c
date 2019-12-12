#include <unistd.h>
#include <string.h>
#include <stdio.h>


char	*ft_strncpy(char *dest, char *src, unsigned int n);

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
	char dest1[40];
	char dest2[40];
	char dest3[40];
	int i;

	ft_putstr(ft_strncpy(src, "42 Sao Paulo\n", 40));

	strcpy(src, "13characteres");

	ft_strncpy(dest1, src, 13);
//	strncpy(dest1, src, 13);
	ft_putstr("size = 13 : ");
	for (i = 0 ; i < 13; i++)
		ft_putchar(*(dest1 + i));
	ft_putchar('\n');

	ft_strncpy(dest2, src, 10);
//	strncpy(dest2, src, 10);
	ft_putstr("size = 10 : ");
	for (i = 0 ; i < 10; i++)
		ft_putchar(*(dest2 + i));
	ft_putchar('\n');

	ft_strncpy(dest3, src, 16);
//	strncpy(dest3, src, 16);
	ft_putstr("size = 16 : ");
	for (i = 0 ; i < 16; i++)
		ft_putchar(*(dest3 + i));
	ft_putchar('\n');

	return(0);
}
