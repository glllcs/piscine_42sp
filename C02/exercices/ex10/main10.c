#include <unistd.h>
#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void			ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	else
	{
		ft_putchar(nb + '0');
		return ;
	}
	ft_putnbr(nb % 10);
}

int				main(void)
{
	char src[40];
	char dest1[40];
	char dest2[40];
	char dest3[40];
	int i;
	unsigned int l;

	strcpy(src, "13characteres");

	l = ft_strlcpy(dest1, src, 13);
	for (i = 0 ; i < 13; i++)
		ft_putchar(*(dest1 + i));
	ft_putchar('\n');
	ft_putstr("size = 13 /lenght = ");
	ft_putnbr(l);
	ft_putchar('\n');
	
	l = ft_strlcpy(dest2, src, 10);
	for (i = 0 ; i < 10; i++)
		ft_putchar(*(dest2 + i));
	ft_putchar('\n');
	ft_putstr("size = 10 /lenght = ");
	ft_putnbr(l);
	ft_putchar('\n');

	l = ft_strlcpy(dest3, src, 16);
	for (i = 0 ; i < 16; i++)
		ft_putchar(*(dest3 + i));
	ft_putchar('\n');
	ft_putstr("size = 16 /lenght = ");
	ft_putnbr(l);
	ft_putchar('\n');

	return(0);
}
