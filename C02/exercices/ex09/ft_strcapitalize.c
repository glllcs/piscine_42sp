/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 13:45:58 by lambrozi          #+#    #+#             */
/*   Updated: 2019/12/02 12:59:18 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_alphanum(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	if (str >= 'A' && str <= 'Z')
		return (2);
	if (str >= 'a' && str <= 'z')
		return (3);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	prev_carac;

	i = 0;
	prev_carac = '!';
	while (str[i] != '\0')
	{
		if (ft_alphanum(prev_carac) == 0 && ft_alphanum(str[i]) == 3)
			str[i] = str[i] - 32;
		else if (ft_alphanum(prev_carac) >= 2 && ft_alphanum(str[i]) == 2)
			str[i] = str[i] + 32;
		prev_carac = str[i];
		i++;
	}
	return (str);
}
