/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 09:57:09 by lambrozi          #+#    #+#             */
/*   Updated: 2019/11/25 09:57:21 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int up;
	int down;
	int temp;

	up = 0;
	down = size - 1;
	while (up < size / 2)
	{
		temp = *(tab + down);
		*(tab + down) = *(tab + up);
		*(tab + up) = temp;
		up++;
		down--;
	}
}
