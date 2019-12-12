/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   programa_ex05.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 19:06:39 by lambrozi          #+#    #+#             */
/*   Updated: 2019/11/23 00:19:02 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char f, char s, char t)
{
	write(1, &f, 1);
	write(1, &s, 1);
	write(1, &t, 1);
	if (f != '7' || s != '8' || t != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char first;
	char second;
	char third;

	first = '0';
	second = '0';
	third = '0';
	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				ft_print(first, second, third);
				third++;
			}
			second++;
		}
		first++;
	}
}
