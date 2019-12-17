/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 20:14:49 by lambrozi          #+#    #+#             */
/*   Updated: 2019/12/09 23:51:59 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int *array;
	int i;

	size = max - min;
	if (size > 0)
	{
		i = 0;
		array = (int *)malloc(size * sizeof(int));
		while (i < size)
		{
			array[i] = min + i;
			i++;
		}
	}
	else
	{
		array = (int *)malloc(0);
		return (0);
	}
	return (size);
}
