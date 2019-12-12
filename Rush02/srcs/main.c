/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpinheir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 17:34:50 by dpinheir          #+#    #+#             */
/*   Updated: 2019/12/08 21:08:12 by dpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "functions.h"
#include "numbers.h"

t_number g_numbs[100];

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	ft_read_file("numbers.txt");
	ft_translate(argv[1], ft_strlen(argv[1]));
	return (0);
}
