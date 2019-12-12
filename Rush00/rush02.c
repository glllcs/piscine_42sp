/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 11:52:42 by lambrozi          #+#    #+#             */
/*   Updated: 2019/11/24 15:40:10 by gsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char charac);

void	ft_choice_char(int c, int l, int x, int y)
{
	if ((c == 0 && l == 0) || (c == x - 1 && l == 0))
		ft_putchar('A');
	else if ((c == 0 && l == y - 1) || (c == x - 1 && l == y - 1))
		ft_putchar('C');
	else if (c == 0 || c == x - 1 || l == 0 || l == y - 1)
		ft_putchar('B');
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
			ft_choice_char(c, l, x, y);
			c++;
		}
		l++;
		ft_putchar('\n');
	}
}
