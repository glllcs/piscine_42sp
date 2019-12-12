#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
//	char c='\n';
//	printf("%d",c);

	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	ft_putstr_non_printable("\a\b\f\n\r\t\v");
	return(0);
}
