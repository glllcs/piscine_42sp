/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 10:24:05 by gsenra-a          #+#    #+#             */
/*   Updated: 2019/11/24 15:37:17 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letra);

void	ft_choice_charac(int c, int l, int x, int y)
{
	if ((l == 0 && c == 0) || (l == 0 && c == x - 1))
		ft_putchar('o');
	else if ((l == y - 1 && c == 0) || (l == y - 1 && c == x - 1))
		ft_putchar('o');
	else if ((l == 0) || (l == y - 1))
		ft_putchar('-');
	else if ((c == 0) || (c == x - 1))
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int c;
	int l;

	if ((x == 0) || (y == 0))
		return ;
	l = 0;
	while (l < y)
	{
		c = 0;
		while (c < x)
		{
			ft_choice_charac(c, l, x, y);
			c++;
		}
		l++;
		ft_putchar('\n');
	}
}
