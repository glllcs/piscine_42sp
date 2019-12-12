/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 15:41:33 by aroque            #+#    #+#             */
/*   Updated: 2019/12/11 22:12:46 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "map_info.h"
#include <stdlib.h>

t_map_info	*initialize_map_info(char *buffer)
{
	t_map_info	*map;

	map = malloc(sizeof(t_map_info));
	map->row = get_row(buffer);
	map->col = get_col(buffer);
	get_chars(map, buffer);
	numeric_map(map);
	return (map);
}

void		numeric_map(t_map_info *m)
{
	int		*first;
	char	*first_char;

	m->map_int = (int *)malloc(m->col * m->row * sizeof(int));
	first = m->map_int;
	first_char = m->map_char;
	while (*m->map_char)
	{
		if (*m->map_char == m->empty)
		{
			*m->map_int = 1;
			m->map_int++;
		}
		else if (*m->map_char == m->obstacle)
		{
			*m->map_int = 0;
			m->map_int++;
		}
		m->map_char++;
	}
	m->map_char = first_char;
	m->map_int = first;
}

/*
** Fill up map_info with empty,
** obstacles and full char information.
*/

void		get_chars(t_map_info *map, char *buffer)
{
	while (ft_str_is_numeric(*buffer))
	{
		buffer++;
	}
	map->empty = *(buffer++);
	map->obstacle = *(buffer++);
	map->full = *(buffer++);
	map->map_char = buffer;
}

int			get_row(char *buffer)
{
	return (ft_atoi(buffer));
}

/*
** Check for inconsistent number of cols;
** otherwise, return number of cols.
*/

int			get_col(char *buffer)
{
	int i;
	int col;

	i = 0;
	col = 0;
	while (*buffer != '\n')
	{
		buffer++;
	}
	buffer++;
	while (*(buffer + i) != '\n')
	{
		i++;
	}
	col = i;
	while (*(buffer + i))
	{
		if (*(buffer + i) != '\n')
		{
			return (0);
		}
		i += col + 1;
	}
	return (col);
}
