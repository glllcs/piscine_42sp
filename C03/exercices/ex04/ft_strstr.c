/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 13:17:52 by lambrozi          #+#    #+#             */
/*   Updated: 2019/12/04 20:30:30 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int s;
	int f;

	s = 0;
	if (*to_find == '\0')
		return (str);
	if (str[s] == '\0')
		return (0);
	while (str[s] != '\0')
	{
		f = 0;
		while (str[s + f] == to_find[f] && to_find[f] != '\0')
		{
			f++;
		}
		if (to_find[f] == '\0')
			return (&str[s]);
		s++;
	}
	return (0);
}
