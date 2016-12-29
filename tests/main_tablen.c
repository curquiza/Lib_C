#include "libft.h"
#include <stdio.h>

int		ft_tablen(char **tab);

int		main(int ac, char **av)
{
	(void)ac;
	printf("taille de tab : %d\n", ft_tablen(av));
	printf("taille de tab : %d\n", ft_tablen(NULL));
	return (0);
}
