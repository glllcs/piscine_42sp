/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numeric.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 21:46:20 by lambrozi          #+#    #+#             */
/*   Updated: 2019/12/11 22:03:31 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_isspace(char str)
{
	if (str == ' ' || str == '\t' || str == '\n')
	{
		return (1);
	}
	else if (str == '\v' || str == '\f' || str == '\r')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		atoi_signal(char *str)
{
	int signal;

	signal = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			signal++;
		}
		str++;
	}
	while (*str < '0' || *str > '9')
	{
		return (0);
	}
	signal = (signal % 2) * -1;
	signal ? signal : signal++;
	return (signal);
}

int		ft_atoi(char *str)
{
	int n;
	int aux;
	int n_signal;
	int signal;

	n = 0;
	aux = -1;
	while (ft_isspace(*str))
	{
		str++;
	}
	signal = atoi_signal(str);
	while (*str == '+' || *str == '-')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	n_signal = n * signal;
	return (n_signal);
}

int		ft_str_is_numeric(char str)
{
	if (!(str >= '0' && str <= '9'))
	{
		return (0);
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
