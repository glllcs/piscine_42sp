/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 12:53:03 by exam              #+#    #+#             */
/*   Updated: 2019/12/13 14:30:09 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_get_size(int start, int end)
{
	if (start > end)
		return(start - end + 1);
	return(end - start + 1);
}

int     *ft_rrange(int start, int end)
{
	int size;
	int *arr;
	int i;

	size = ft_get_size(start, end);
	arr = (int *)malloc(sizeof(int) * size);	
	i = 0;
	while (i < size)
	{
		if (start > end)
			arr[i] = end + i;
		else
			arr[i] = end - i;
		i++;
	}
	return (arr);
}
