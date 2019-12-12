/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpinheir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 12:49:15 by dpinheir          #+#    #+#             */
/*   Updated: 2019/12/09 13:03:57 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"
#include "functions.h"

int	ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

void	ft_search(char *nbr, int size)
{
	int i;
	int j;

	j = 0;
	while (j <= 40)
	{
		i = 0;
		if (size == 1)
		{
			if (g_numbs[j].digits == size)
			{
				if (g_numbs[j].nbr[i] == nbr[i])
				{
					ft_putstr(g_numbs[j].text);
					ft_putchar(' ');
					return ;
				}
			}
		}
		else if (size == 2)
		{
			if (g_numbs[j].digits == size)
			{
				if (g_numbs[j].nbr[i] == nbr[i] &&
					g_numbs[j].nbr[i + 1] == nbr[i + 1])
				{
					ft_putstr(g_numbs[j].text);
					ft_putchar(' ');
					return ;
				}
			}
		}
		else if (size > 2)
		{
			if (size == g_numbs[j].digits)
			{
				ft_putstr(g_numbs[j].text);
				ft_putchar(' ');
				return ;
			}
		}
		j++;
	}
}

void	ft_translate(char *number, int size)
{
	int		i;
	char	nbr[3];

	i = 0;
	if (*number == '0')
		return (ft_translate(number + 1, size - 1));
	if ((size % 3) == 0)
	{
		nbr[0] = *number;
		nbr[1] = '\0';
		ft_search(nbr, 1);
		ft_search(nbr, 3);
		return (ft_translate(number + 1, size - 1));
	}
	else if ((size % 3) == 2)
	{
		if (*number > '1')
		{
			nbr[0] = *number;
			nbr[1] = '0';
			nbr[2] = '\0';
			ft_search(nbr, 2);
			return (ft_translate(number + 1, size - 1));
		}
		else
		{
			nbr[0] = *number;
			nbr[1] = *(number + 1);
			nbr[2] = '\0';
			ft_search(nbr, 2);
			return (ft_translate(number + 2, size - 2));
		}
	}
	else if ((size % 3) == 1)
	{
		nbr[0] = *number;
		nbr[1] = '\0';
		ft_search(nbr, 1);
		ft_search(nbr, size);
		return (ft_translate(number + 1, size - 1));
	}
	else
		return ;
}
