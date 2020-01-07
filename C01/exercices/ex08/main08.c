#include <stdio.h>
#include <unistd.h>

void    ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int tab[6] = {283,54,0,-32,5,-4};
	int i;
	int size=6;
	
	for(i=0;i<size;i++)
		printf("%d ", *(tab + i));
	printf("\n");
	ft_sort_int_tab(tab,size);
	for(i=0;i<size;i++)
		printf("%d ", *(tab + i));
	printf("\n\n");
	return (0);
}
