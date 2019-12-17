/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 21:02:14 by lambrozi          #+#    #+#             */
/*   Updated: 2019/12/05 03:54:17 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int answ;

	i = 0;
	answ = 1;
	while (i < power)
	{
		answ = answ * nb;
		i++;
	}
	if (power < 0)
		answ = 0;
	return (answ);
}
