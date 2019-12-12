#include <unistd.h>

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

char	*ft_strlowcase(char *str);

int 	main(void)
{
	char str[40];
	
	ft_strcpy(str, "42 SAO PAULO :)\n");
	ft_putstr(str);
	ft_putstr(ft_strlowcase(str));
	return (0);
}


