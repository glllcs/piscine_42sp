#include <stdio.h>
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

int		ft_strlen(char *str);

int		main(void)
{
	char *word = "42sp";
	ft_putstr(word);
	ft_putchar('\n');
	printf("%d", ft_strlen(word));
	return (0);
}
