/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 00:43:46 by lambrozi          #+#    #+#             */
/*   Updated: 2019/12/06 01:14:50 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int size;
	char *dst;

	size = 0;
	while (src[size] != '\0')
		size++;
	dst = (char *)malloc(size * sizeof(char));
	dst = src;
	return (dst);
}
