#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
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

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

int		main(void)
{
	int nbr;
	char *base;

	nbr = 5936237;
	ft_strcpy(base,"uliarve");
	ft_putstr("Number = ");
	ft_putnbr(nbr);
	ft_putstr(", Base = ");
	ft_putstr(base);
	ft_putstr("\nAnswer = ");
	ft_putnbr_base(nbr,base);
	ft_putstr("\n\n");

	nbr = 11825;
	ft_strcpy(base,"yctrpo");
	ft_putstr("Number = ");
	ft_putnbr(nbr);
	ft_putstr(", Base = ");
	ft_putstr(base);
	ft_putstr("\nAnswer = ");
	ft_putnbr_base(nbr,base);
	ft_putstr("\n\n");

	nbr = 41257;
	ft_strcpy(base,"u");
	ft_putstr("Number = ");
	ft_putnbr(nbr);
	ft_putstr(", Base = ");
	ft_putstr(base);
	ft_putstr("\nAnswer = ");
	ft_putnbr_base(nbr,base);
	ft_putstr("\n\n");

	nbr = -452145;
	ft_strcpy(base,"rf(t-gu");
	ft_putstr("Number = ");
	ft_putnbr(nbr);
	ft_putstr(", Base = ");
	ft_putstr(base);
	ft_putstr("\nAnswer = ");
	ft_putnbr_base(nbr,base);
	ft_putstr("\n\n");

	nbr = 5646775;
	ft_strcpy(base,"fcnjuu");
	ft_putstr("Number = ");
	ft_putnbr(nbr);
	ft_putstr(", Base = ");
	ft_putstr(base);
	ft_putstr("\nAnswer = ");
	ft_putnbr_base(nbr,base);
	ft_putstr("\n\n");

	nbr = -5936237;
	ft_strcpy(base,"gfrs3u");
	ft_putstr("Number = ");
	ft_putnbr(nbr);
	ft_putstr(", Base = ");
	ft_putstr(base);
	ft_putstr("\nAnswer = ");
	ft_putnbr_base(nbr,base);
	ft_putstr("\n\n");
	return (0);
}
