/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 14:31:53 by exam              #+#    #+#             */
/*   Updated: 2019/12/13 17:21:02 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_space(char c)
{
	return ((c == ' ' || c == '\n' || c == '\t' || c == '\0') ? (1) : (0));
}

int		ft_count_words(char *str)
{
	int i;
	int words;
	int aux;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		aux = 0;
		while (!(ft_is_space(str[i + 1])))
		{
			aux = 1;
			i++;
		}
		if (aux)
			words++;
		i++;
	}
	return (words);
}

int		ft_populate(char *str, char **matrix)
{
	int i;
	int letters;
	int words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		letters = 0;
		while (!(ft_is_space(str[i])))
		{
			matrix[words][letters] = str[i];
			i++;
			letters++;
		}
		matrix[words][letters] = '\0';
		words++;
		if (str[i] != '\0')
			i++;
	}
	matrix[words] = NULL;
	return (words);
}

char	**ft_alocate_letters(char *str, char **matrix)
{
	int i;
	int words;
	int letters;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		letters = 0;
		while (!(ft_is_space(str[i])))
		{
			i++;
			letters++;
		}
		matrix[words] = (char *)malloc(sizeof(char) * letters);
		words++;
		if (str[i] != '\0')
			i++;
	}
	return (matrix);
}


char    **ft_split(char *str)
{
	char **matrix;

	matrix = (char **)malloc(sizeof(char *) * ft_count_words(str) + 1);
	matrix = ft_alocate_letters(str, matrix);
	ft_populate(str, matrix);
	return (matrix);
}
