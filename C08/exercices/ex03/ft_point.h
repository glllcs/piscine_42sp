/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 04:23:09 by lambrozi          #+#    #+#             */
/*   Updated: 2019/12/12 05:58:24 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

struct	s_point
{
	int x;
	int y;
};

typedef struct s_point	t_point;

void	set_point(t_point *point);

#endif
