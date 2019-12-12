/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 19:35:45 by lambrozi          #+#    #+#             */
/*   Updated: 2019/12/01 21:16:36 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 15:01:31 by edbarbos          #+#    #+#             */
/*   Updated: 2019/12/01 19:22:15 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_put_matrix(char matrix[][6], char str, int position)
{
	int l;
	int c;

	position = position / 2;
	if(position / 4 == 0)
		matrix[0][(position % 4) + 1] = str;
	else if (position / 4 == 1)
		matrix[5][(position % 4) + 1] = str;
	else if (position / 4 == 2)
		matrix[(position % 4) + 1][0] = str;
	else if (position / 4 == 3)
		matrix[(position % 4) + 1][5] = str;
}
		
void ft_zeros(char matrix[][6])
{
	int l;
	int c;

	l = 0;
	c = 0;
	while(l <= 5)
	{
		c = 0;
		while(c <= 5)
		{
			matrix[l][c] = '0';
			c++;
		}
		l++;
	}
}
	
void ft_print_matrix(char matrix[][6])
{
	int line;
	int column;

	line = 0;
	column = 0;

	while (line <= 5)
	{
		column = 0;
		while (column <= 5)
		{
			ft_putchar(matrix[line][column]);
			ft_putchar(' ');
			column++;
		}
		printf("\n");
		line++;
	}
}

int ft_getstring(char matrix[][6], char *str)
{
	int x;

	x = 0;
	while(str[x] != '\0')
	{
		if (x > 31)
			return (1);
		if(x % 2 == 0 && (str[x] > '0' && str[x] <='4'))
		{
			ft_put_matrix(matrix, str[x], x);
			x++;
		}
		else if (x % 2 == 1 && (str[x] == ' '))
			x++;
		else
			return (1);
	}
	if (x != 31)
		return (1);
	return (0);
}

int ft_constraint(char matrix[][6], int lin, int col)
{
	int i;
	int aux;
	int cont;
	
	i = 1;
	while (i < col)
	{
		if (matrix[lin][i] == matrix[lin][col])
		//	printf("(%d,%d) %c (%d,%d)  %c\n", lin, i, matrix[lin][i], lin, col, matrix[lin][col]);
		//	if (i != col)
				return (0);
		i++;
	}
	i = 1;
	while (i < lin)
	{
		if (matrix[i][col] == matrix[lin][col])
		{
		//	printf("(%d,%d) %c (%d,%d)  %c\n", i, col, matrix[i][col], lin, col, matrix[lin][col]);
		//	if (i != lin)
				return (0);
		}
		i++;
	}
	//pra baixo
	if (lin == 4)
	{
		i = 1;
		cont = 1;
		while (i < 4)
		{
			aux = matrix[i][col];
			if (matrix[i][col] < matrix[i + 1][col])
			{
				aux = matrix[i + 1][col];
				cont++;
			}
			i++;
		}
		//	printf("cont = %d, col= %d, matrix[0][col]=%c\n", cont, col, matrix[0][col]);
		if (cont != matrix[0][col] - '0')
			return (0);
		//pra cima
		i = 4;
		cont = 1;
		while (i > 0)
		{
			aux = matrix[i][col];
			if (matrix[i][col] < matrix[i - 1][col])
			{
				aux = matrix[i - 1][col];
				cont++;
			}
			i--;
		}
		//	printf("cont = %d, col= %d, matrix[0][col]=%c\n", cont, col, matrix[0][col]);
		if (cont != matrix[5][col] - '0')
			return (0);
	}
	//pra direita
	if (col == 4)
	{
		i = 1;
		cont = 1;
		while (i < 4)
		{
			aux = matrix[lin][i];
			if (matrix[lin][i] < matrix[lin][i + 1])
			{
				aux = matrix[lin][i + 1];
				cont++;
			}
			i++;
		}
		//	printf("cont = %d, col= %d, matrix[0][col]=%c\n", cont, col, matrix[0][col]);
		if (cont != matrix[lin][0] - '0')
			return (0);
		//pra esquerda
		i = 4;
		cont = 1;
		while (i > 0)
		{
			aux = matrix[lin][i];
			if (matrix[lin][i] < matrix[lin][i - 1])
			{
				aux = matrix[lin][i - 1];
				cont++;
			}
			i--;
		}
		if (cont != matrix[lin][5] - '0')
			return (0);
	}
	return (1);
}

int ft_population(char matrix[][6], int lin, int col)
{
	int check;
//	if (lin == 4)
//	{
	ft_print_matrix(matrix);
	printf("\n");
//	}
//	printf("(%d,%d) = %c\n", lin, col, matrix[lin][col]);
//	if (lin == 4 & col == 2)
//		return 0;
	if (matrix[lin][col] < '4')
	{
		matrix[lin][col]++;
		check = ft_constraint(matrix, lin, col);
		//		printf("(%d, %d) = %c\n", lin, col, matrix[lin][col]);
	}
	else 
	{
		matrix[lin][col] = '0';
		if (col > 1)
			return ft_population(matrix, lin, col - 1);
		else if (lin > 1)
			return ft_population(matrix, lin - 1, 4);
	}
//	printf("%d\n", check);
	if (check)
	{
		if (lin == 4 && col == 4)
			return (0);
		else
		{
			if (col < 4)
				return ft_population(matrix, lin, col + 1);
			else
				return ft_population(matrix, lin + 1, 1);
		}
	}
	else if (check == 0)
	{
		return ft_population(matrix, lin, col);
	}
//		&& !(lin == 1 && col == 1))
	return (0);
}

int	main(int argc, char *argv[])
{
	int error;
	char matrix[6][6];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	ft_zeros(matrix);
	error = ft_getstring(matrix, argv[1]);
	if (error)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	error = ft_population(matrix, 1, 1);
	if (error)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	ft_putchar('\n');
	ft_print_matrix(matrix);
	return 0;
}
