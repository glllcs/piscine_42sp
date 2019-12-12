/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpinheir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 13:20:29 by dpinheir          #+#    #+#             */
/*   Updated: 2019/12/09 11:47:23 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
#include "numbers.h"
#include "functions.h"
#define BUF_SIZE 8000

int		size_dict(char *buf)
{
	int i;
	int elem_numb;

	elem_numb = 0;
	i = 0;
	while (buf[i] != '\0')
	{
		if (buf[i] == ':')
			elem_numb++;
		i++;
	}
	return (elem_numb);
}

void	ft_get_numbers(char *buf)
{
	int		size;
	int		j;
	int		k;
	int		i;

	size = size_dict(buf);
	j = 0;
	i = 0;
	while (buf[i] != '\0')
	{
		k = 0;
		while (buf[i] != ' ' && buf[i] != ':')
		{
			g_numbs[j].nbr[k] = buf[i];
			i++;
			k++;
		}
		g_numbs[j].nbr[k] = '\0';
		g_numbs[j].digits = k;
		while (buf[i] == ' ' || buf[i] == ':')
			i++;
		k = 0;
		while (buf[i] != '\n' && *(buf + 1) != '\0')
		{
			g_numbs[j].text[k] = buf[i];
			i++;
			k++;
		}
		g_numbs[j].text[k] = '\0';
		j++;
		i++;
	}
	j = 0;
}

int		ft_read_file(char *name)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	fd = open(name, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot open file.\n");
		return (0);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	if (close(fd) == -1)
	{
		ft_putstr("Cannot close file.\n");
		return (0);
	}
	ft_get_numbers(buf);
	return (1);
}
