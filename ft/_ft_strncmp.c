/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 21:04:44 by lambrozi          #+#    #+#             */
/*   Updated: 2019/12/04 23:13:04 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if ((unsigned)s1[i] < (unsigned)s2[i] || s1[i] == '\0')
			return (-1);
		else if ((unsigned)s1[i] > (unsigned)s2[i] || s2[i] == '\0')
			return (1);
		else
			i++;
	}
	return (0);
}
