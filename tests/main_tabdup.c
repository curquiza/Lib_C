#include <stdio.h>
#include <stdlib.h>
#include "libft.h"


int		main(int ac, char **av)
{
	char 	**tab;
	char	**tab2;
	if (ac != 2)
		return (0);

	tab = ft_strsplit(av[1], ' ');
	ft_putendl_col("tab =", YELLOW, DEF);
	ft_puttab(tab);
	tab2 = ft_tabdup(tab);
	ft_putendl_col("copie de tab =", YELLOW, DEF);
	ft_puttab(tab2);
	return (0);
}
