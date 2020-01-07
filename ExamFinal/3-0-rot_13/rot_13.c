/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 10:22:10 by exam              #+#    #+#             */
/*   Updated: 2019/12/13 10:43:54 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

void	ft_rot13(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'M')
			str[i] += 13;
		else if (str[i] > 'M' && str[i] <= 'Z')
			str[i] -= 13;
		else if (str[i] >= 'a' && str[i] <= 'm')
			str[i] += 13;
		else if (str[i] > 'm' && str[i] <= 'z')
			str[i] -= 13;
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_rot13(argv[1]);
	write(1, "\n", 1);
	return (0);
}
