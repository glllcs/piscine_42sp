/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 17:54:25 by lambrozi          #+#    #+#             */
/*   Updated: 2019/12/11 22:34:50 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft.h"

#define BUF_SIZE 8000

char	*ft_read_file(char *name)
{
	int		fd;
	int		ret;
	char	*buf;

	buf = malloc((BUF_SIZE + 1) * sizeof(char));
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
	return (buf);
}
