/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 21:01:45 by aroque            #+#    #+#             */
/*   Updated: 2019/12/11 22:29:09 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
#define FT_H

int		ft_atoi(char *str);
int 	ft_strlen(char *str);
int 	ft_strcmp(char *s1, char *s2);
int		ft_str_is_numeric(char str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
char	ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, int nb);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_read_file(char *name);

#endif
