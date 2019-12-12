/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpinheir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 13:24:21 by dpinheir          #+#    #+#             */
/*   Updated: 2019/12/08 16:30:43 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBERS_H
# define NUMBERS_H

struct	s_numbers
{
	char			nbr[50];
	char			text[20];
	int				digits;
};

typedef struct s_numbers	t_number;

#endif
