/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 07:27:48 by aroque            #+#    #+#             */
/*   Updated: 2019/12/11 22:04:52 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		write(1, str + i, 1);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	char *first;

	first = dest;
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (first);
}

int		ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 0x20 && *str < 0x7f))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
