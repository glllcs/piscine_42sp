#include "ft_stock_str.h"
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

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int	main(void)
{
	struct s_stock_str st;
	char teste[5][7] = {"Piscina","42","Sao","Paulo","Federa"};
	int i = 0;
	int size = 5;

	st = ft_strs_to_tab(size,teste);
	
	while(i < size)
	{
		ft_putstring("Size: ");
		ft_putnbr(st.size);
		ft_putstring("\nstr: ");
		ft_putstring(st.str);
		ft_putstring("\ncopy: ");
		ft_putstring(st.copy);

	}
}
