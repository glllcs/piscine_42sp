#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int *tab;
	int i;
	int size;

	for (size=1;size<=10;size++)
	{
		for(i=0;i<size;i++)
			*(tab + i) = i;
		for(i=0;i<size;i++)
			printf("%d ", *(tab + i));
		printf("\n");
		ft_rev_int_tab(tab,size);
		for(i=0;i<size;i++)
			printf("%d ", *(tab + i));
		printf("\n\n");
	}
	return (0);
}
