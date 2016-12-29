#include <stdio.h>
#include <stdlib.h>

void	ft_puttab_int(int *tab, int size);

int		main(void)
{
	int		tab[6]={21, 0, -2, 2147483647, -20, -0};
	int		tab2[1]={2134};
	
	ft_puttab_int(tab, 6);
	ft_puttab_int(tab, 0);
	ft_puttab_int(NULL, 6);
	ft_puttab_int(NULL, 0);
	ft_puttab_int(tab2, 1);
	return (0);
}
