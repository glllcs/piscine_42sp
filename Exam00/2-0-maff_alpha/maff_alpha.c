/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 11:52:17 by exam              #+#    #+#             */
/*   Updated: 2019/11/22 12:04:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	maff_alpha(void)
{
	char letter_lower;
	char letter_upper;
	int i;

	letter_lower = 'a';
	letter_upper = 'A';
	i = 0;
	while (letter_lower <= 'z')
	{
		if (i % 2 == 0)
		{
			write(1, &letter_lower, 1);
		}
		else
		{
			write(1, &letter_upper, 1);
		}
		letter_lower++;
		letter_upper++;
		i++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	maff_alpha();
	return (0);
}
