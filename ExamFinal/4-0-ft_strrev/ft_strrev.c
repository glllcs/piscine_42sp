/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 10:48:11 by exam              #+#    #+#             */
/*   Updated: 2019/12/13 11:05:02 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strrev(char *str)
{
	char	aux;
	int		size;
	int		i;

	i = 0;
	size = 0;
	while(str[size])
		size++;
	size--;
	while(i <= size / 2)
	{
		aux = str[i];
		str[i] = str[size - i];
		str[size - i] = aux;
		i++;
	}
	return (str);
}
