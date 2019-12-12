/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 22:38:55 by aroque            #+#    #+#             */
/*   Updated: 2019/12/11 22:40:33 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "map_info.h"
#include "ft.h"

#define BUF_SIZE 8000

int	main(int argc, char **argv)
{
	t_map_info	map_info;
	char		*buffer;
	int			i;

	i = 1;
	while (i < argc)
	{
		buffer = malloc(BUF_SIZE * sizeof(char));
		buffer = ft_read_file(argv[i]);
		map_info = *initialize_map_info(buffer);
		ft_fill_up_numbers(map_info);
		ft_fullfil_map(&map_info);
		ft_putstr(map_info.map_char + 1);
		(i != argc - 1) ? ft_putchar('\n') : 0;
		i++;
	}
}
