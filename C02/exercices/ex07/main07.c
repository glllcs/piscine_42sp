#include <unistd.h>

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

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*(dest + 1) = '\0';
	return (dest);
}

char	*ft_strupcase(char *str);

int 	main(void)
{
	char str[40];
	
	ft_strcpy(str, "Federacao eh a melhor!!\n");
	ft_putstr(str);
	ft_putstr(ft_strupcase(str));
	return (0);
}


