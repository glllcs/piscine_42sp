#include <stdio.h>

int	*ft_range(int min, int max);

int main(void)
{
	int min;
	int max;
	int *array;
	int i;

	min = 2;
	max = 7;
	array = ft_range(min, max);
	printf("(%d...%d)\t\t", min, max);
	for (i=0; i < max-min; i++)
		printf("%d ", array[i]);
	printf("\n");

	min = -2;
	max = -7;
	array = ft_range(min, max);
	printf("(%d...%d)\t", min, max);
	for (i=0; i < max-min; i++)
		printf("%d ", array[i]);
	printf("\n");

	min = -2;
	max = 7;
	array = ft_range(min, max);
	printf("(%d...%d)\t", min, max);
	for (i=0; i < max-min; i++)
		printf("%d ", array[i]);
	printf("\n");

	min = 2;
	max = -7;
	array = ft_range(min, max);
	printf("(%d...%d)\t", min, max);
	for (i=0; i < max-min; i++)
		printf("%d ", array[i]);
	printf("\n");

	min = 7;
	max = 2;
	array = ft_range(min, max);
	printf("(%d...%d)\t\t", min, max);
	for (i=0; i < max-min; i++)
		printf("%d ", array[i]);
	printf("\n");

	min = -7;
	max = -2;
	array = ft_range(min, max);
	printf("(%d...%d)\t", min, max);
	for (i=0; i < max-min; i++)
		printf("%d ", array[i]);
	printf("\n");

	min = -7;
	max = 2;
	array = ft_range(min, max);
	printf("(%d...%d)\t", min, max);
	for (i=0; i < max-min; i++)
		printf("%d ", array[i]);
	printf("\n");

	min = 7;
	max = -2;
	array = ft_range(min, max);
	printf("(%d...%d)\t", min, max);
	for (i=0; i < max-min; i++)
		printf("%d ", array[i]);
	printf("\n");

	min = 0;
	max = 5;
	array = ft_range(min, max);
	printf("(%d...%d)\t\t", min, max);
	for (i=0; i < max-min; i++)
		printf("%d ", array[i]);
	printf("\n");

	return(0);
}
