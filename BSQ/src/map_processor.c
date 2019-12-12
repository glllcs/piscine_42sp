/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_processor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 22:19:28 by aroque            #+#    #+#             */
/*   Updated: 2019/12/11 22:34:12 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "map_info.h"
#include "ft.h"

int		ft_min(int a, int b, int c)
{
	if (a < b)
	{
		if (a < c)
			return (a);
	}
	else if (b < c)
		return (b);
	return (c);
}

void	ft_fill_up_numbers(t_map_info m)
{
	int i;
	int c;
	int r;

	c = m.col;
	r = m.row;
	i = 0;
	while (i < r * c)
	{
		if (i >= c && i % c != 0 && m.map_int[i] != 0)
			m.map_int[i] = 1 + ft_min(m.map_int[i - 1],
					m.map_int[i - c], m.map_int[i - c - 1]);
		i++;
	}
}

int		ft_bsq_index(t_map_info map, int *max)
{
	int i;
	int index;

	i = 0;
	index = i;
	*max = map.map_int[i];
	while (i < map.row * map.col)
	{
		if (map.map_int[i] > *max)
		{
			index = i;
			*max = map.map_int[i];
		}
		i++;
	}
	return (index);
}

void	ft_fullfil_map(t_map_info *map)
{
	int i;
	int count;
	int index;
	int size;

	size = 0;
	index = ft_bsq_index(*map, &size);
	i = index - (map->col * (size - 1)) - (size - 1);
	i += i / map->col;
	index += index / map->col;
	while (i <= index)
	{
		count = 0;
		while (count < size)
		{
			map->map_char[i + 1] = map->full;
			count++;
			i++;
		}
		i = i - size + map->col + 1;
	}
}

void	nmap_dump(t_map_info map_info)
{
	int i;
	int r;
	int c;

	r = map_info.row;
	c = map_info.col;
	i = 0;
	while (i < r * c)
	{
		ft_putnbr(*(map_info.map_int + i));
		ft_putchar(' ');
		i++;
		if (i % c == 0)
		{
			ft_putchar('\n');
		}
	}
}
