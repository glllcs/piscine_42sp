/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 12:03:00 by exam              #+#    #+#             */
/*   Updated: 2019/12/13 12:27:25 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_union(char *str1, char *str2)
{
	int i;
	int j;
	int aux;

	i = 0;
	while (str1[i] != '\0')
	{
		aux = i - 1;
		while(aux > 0 && str1[i] != str1[aux])
			aux--;
		if ((aux == 0 && str1[i] != str1[aux]) || aux == -1)
			ft_putchar(str1[i]);
		i++;
	}
	j = 0;
	while (str2[j] != '\0')
	{
		aux = j - 1;
		while(aux > 0 && str2[j] != str2[aux])
		{
			aux--;
		}
		if ((aux == 0 && str2[j] != str2[aux]) || aux == -1)
		{
			aux = i - 1;
			while(aux > 0 && str2[j] != str1[aux])
				aux--;
			if (aux == 0 && str2[j] != str1[aux])
				ft_putchar(str2[j]);
		}
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
