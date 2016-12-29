#include "libft.h"
#include <stdio.h>

void	ft_sorttab_ascii(char **tab);

int		main(int ac, char **av)
{
	(void)ac;
	ft_putendl("av :");
	ft_puttab(av);
	ft_putendl("av après tri par ordre ascii :");
	ft_sorttab_ascii(av);
	ft_puttab(av);
	ft_sorttab_ascii(NULL);
	return (0);
}
