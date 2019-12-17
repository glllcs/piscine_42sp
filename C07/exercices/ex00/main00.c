#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int		main(void)
{
    char src[] = "Diversidade";
    char *trgt1 = strdup(src);
	char *trgt2 = ft_strdup(src);

    printf("[%s]\nstrdup:\t\t%s\nft_strdup:\t%s\n", src, trgt1, trgt2);
    return 0;
}
