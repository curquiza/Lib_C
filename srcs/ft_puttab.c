#include "libft.h"

/*
 ** Affiche un double pointeur sur char
 ** sachant que le dernier pointeur sur char du tableau est NULL
 */

void	ft_puttab(char **tab)
{
	int		i;

	i = 0;
	if (tab)
	{
		while (tab[i])
		{
			ft_putendl(tab[i]);
			i++;
		}
	}
}
