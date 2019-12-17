/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 11:53:25 by lambrozi          #+#    #+#             */
/*   Updated: 2019/11/28 18:54:07 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strcat(char *dest, char *src);

int		main(void)
{
	char str[50]="Origem";
	char str1[20]="Destino";
	printf("[%s] [%s]\n", str1, str);
//	printf("strcat: %s\n", strcat(str1,str));
	printf("ft_strcat: %s\n", ft_strcat(str1,str));
	printf("%s", ft_strcat(str1, "Adicionandomais"));
	return 0;
}
