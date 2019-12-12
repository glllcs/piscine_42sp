/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_info.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 15:50:02 by aroque            #+#    #+#             */
/*   Updated: 2019/12/11 22:29:45 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_map_info
{
	int		row;
	int		col;
	char	empty;
	char	obstacle;
	char	full;
	char	*map_char;
	int		*map_int;
};

typedef struct s_map_info t_map_info;

t_map_info	*initialize_map_info(char *buffer);
int			get_row(char *buffer);
int			get_col(char *buffer);
int			ft_min(int a, int b, int c);
int			ft_bsq_index(t_map_info map, int *max);
void		get_chars(t_map_info *map, char *buffer);
void		numeric_map(t_map_info *map_info);
void		ft_fullfil_map(t_map_info *map);
void		nmap_dump(t_map_info map_info);
void		ft_fill_up_numbers(t_map_info m);

