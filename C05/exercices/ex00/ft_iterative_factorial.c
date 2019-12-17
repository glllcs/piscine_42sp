/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 04:19:26 by lambrozi          #+#    #+#             */
/*   Updated: 2019/12/05 02:24:42 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fat;

	if (nb < 0 || nb > 12)
		return (0);
	fat = 1;
	while (nb > 1)
	{
		fat = fat * nb;
		nb--;
	}
	return (fat);
}
