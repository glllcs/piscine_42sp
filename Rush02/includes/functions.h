/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpinheir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 13:27:46 by dpinheir          #+#    #+#             */
/*   Updated: 2019/12/08 20:25:48 by dpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"
#ifndef FUNCTIONS_H
# define FUNCTIONS_H

extern t_number g_numbs[100];
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		size_dict(char *buf);
void	ft_get_numbers(char *buf);
int		ft_read_file(char *name);
void	ft_translate(char *number, int size);
int		ft_strlen(char *str);
#endif
