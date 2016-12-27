#include <stdio.h>
#include <stdlib.h>

void	ft_puttab(char **tab);
char	**ft_strsplit(char const *s, char c);

int		main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	ft_puttab(ft_strsplit(av[1], av[2][0]));
	ft_puttab(NULL);
	return (0);
}
