/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 13:24:37 by lambrozi          #+#    #+#             */
/*   Updated: 2019/12/04 20:26:04 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int cont_d;
	unsigned int cont_s;

	cont_s = 0;
	cont_d = 0;
	while (dest[cont_d] != '\0')
		cont_d++;
	while (1 + cont_d + cont_s < size && src[cont_s] != '\0')
	{
		dest[cont_d + cont_s] = src[cont_s];
		cont_s++;
	}
	dest[cont_d + cont_s] = '\0';
	while (src[cont_s] != '\0')
		cont_s++;
	if (size < cont_d)
		return (size + cont_s);
	return (cont_d + cont_s);
}
