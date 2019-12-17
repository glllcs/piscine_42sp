/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 01:16:12 by lambrozi          #+#    #+#             */
/*   Updated: 2019/12/09 20:13:06 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
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
			array[i] = max - i - 1;
			i++;
		}
	}
	else
		array = (int *)malloc(0);
	return (array);
}
