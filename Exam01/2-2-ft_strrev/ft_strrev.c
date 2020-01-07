/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 10:16:32 by exam              #+#    #+#             */
/*   Updated: 2019/11/29 11:35:54 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int size;
	int i;
	int j;
	char temp;

	size = 0;
	while (str[size] != '\0')
		size++;
	i = 0;
	j = size;
	while (i < (size / 2))
	{
		temp = str[i];
		str[i] = str[j - 1];
		str[j - 1] = temp;
		i++;
		j--;
	}
	return (str);
}
