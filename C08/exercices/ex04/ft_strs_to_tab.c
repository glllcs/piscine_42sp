/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 06:11:40 by lambrozi          #+#    #+#             */
/*   Updated: 2019/12/12 19:03:08 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_str_allocation(struct s_stock_str *st, int j)
{
	st->str = (struct s_stock_str **) malloc(j * sizeof(char));
	st->copy = (struct s_stock_str **) malloc(j * sizeof(char));
	if (st.str == NULL || st.copy == NULL)
		return (1);
	return (0);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	int j;
	struct s_stock_str st;

	i = 0;
	st = (struct s_stock_str *) malloc((ac + 1) * sizeof(struct s_stock_str));
	while (i++ < ac)
	{
		j = 0;
		while (av[i][j++] != '\0')
		if (ft_str_allocation(st, j) == 0)
			return (st);
		j = 0;
		while (av[i][j++] != '\0')
		{
			st.str[i][j] = av[i][j];
			st.copy[i][j] = av[i][j];
		}
		st.size = j;
	}
	st.str = (struct s_stock_str **) malloc(sizeof(char));
	st.str[i][j] = '0'; 
	return (st);
}
