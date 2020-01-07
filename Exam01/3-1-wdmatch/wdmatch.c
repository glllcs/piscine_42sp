/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 11:39:38 by exam              #+#    #+#             */
/*   Updated: 2019/11/29 13:56:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	wdmatch(char *str, char *cadeia)
{
	int i;
	int j;
	int cont;
	int aux;

	i = 0;
	j = 0;
	cont = 0;
	while (str[i] != '\0')
	{
		aux = 0;
		while(cadeia[j] != '\0' && aux == 0)
		{
			if (str[i] == cadeia[j])
				aux++;
			j++;
		}
		if (aux > 0)
			cont++;
		i++;
	}
	if (cont == i)
		return (cont);
	return (0);
}

int main(int argv, char **argc)
{
	int cont;

	if (argv == 3)
	{
		cont = wdmatch(argc[1], argc[2]);
		if (cont > 0)
			write(1, argc[1], cont);
	}
	write(1, "\n", 1);
	return (0);
}

