/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 18:52:10 by lambrozi          #+#    #+#             */
/*   Updated: 2019/12/02 16:35:01 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(int dec)
{
	char	tab[16];
	char	i;
	int		count;

	count = 0;
	i = 48;
	while (i <= 57)
	{
		tab[count] = i;
		i++;
		count++;
	}
	i = 97;
	while (i <= 102)
	{
		tab[count] = i;
		i++;
		count++;
	}
	ft_putchar('\\');
	ft_putchar(tab[dec / 16]);
	ft_putchar(tab[dec % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str < 126)
			ft_putchar(*str);
		else
			ft_puthex((*str));
		str++;
	}
}
