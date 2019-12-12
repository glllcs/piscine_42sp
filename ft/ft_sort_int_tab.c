/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:30:57 by lambrozi          #+#    #+#             */
/*   Updated: 2019/11/25 15:31:05 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int min;
	int j_min;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		min = *(tab + i);
		j_min = i;
		while (j < size)
		{
			if (*(tab + j) < min)
			{
				min = *(tab + j);
				j_min = j;
			}
			j++;
		}
		ft_swap((tab + i), (tab + j_min));
		i++;
	}
}
