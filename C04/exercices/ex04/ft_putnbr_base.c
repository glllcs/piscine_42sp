/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:50:15 by lambrozi          #+#    #+#             */
/*   Updated: 2019/12/12 19:09:38 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_change_base(int nbr, char *base, int size)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_change_base((nbr * -1), base, size);
	}
	if (nbr >= size)
		ft_change_base((nbr / size), base, size);
	else
	{
		ft_putchar(base[nbr]);
		return ;
	}
	ft_change_base((nbr % size), base, size);
}

int		ft_check_size(char *base)
{
	int i;
	int prox;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (-1);
		prox = i + 1;
		while (base[prox] != '\0')
		{
			if (base[i] == base[prox])
				return (-1);
			prox++;
		}
		i++;
	}
	if (i < 2)
		return (-1);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;

	size = ft_check_size(base);
	if (size == -1)
		return ;
	ft_change_base(nbr, base, size);
}
