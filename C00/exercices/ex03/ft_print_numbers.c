/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   programa_ex03.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 18:56:10 by lambrozi          #+#    #+#             */
/*   Updated: 2019/11/23 00:07:43 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char number;

	number = '0';
	while (number <= '9')
	{
		write(1, &number, 1);
		number = number + 1;
	}
}
