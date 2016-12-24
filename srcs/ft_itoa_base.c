#include "libft.h"

/*
** Ne gère pas les négatifs pour les bases != 0
*/

static void		*ft_fill_tabbase(char *tab)
{
	int		i;

	i = 0;
	while (i < 16)
	{
		if (i < 10)
			tab[i] = '0' + i;
		else
			tab[i] = '0' + i + 7;
		i++;
	}
	tab[16] = '\0';
	return (tab);
}

char			*ft_itoa_base(int value, int base)
{
	char	*tab;
	char	tab_base[17];
	int		i;

	if (base < 2 || base > 16)
		return (NULL);
	i = ft_intlen_base(value, base);
	ft_fill_tabbase(tab_base);
	if (!(tab = ft_strnew(i)))
		return (NULL);
	i--;
	tab[0] = '0';
	if (base == 10 && value < 0)
		tab[0] = '-';
	while (value != 0)
	{
		if (value < 0)
			tab[i] = tab_base[-1 * (value % base)];
		else
			tab[i] = tab_base[value % base];
		value = value / base;
		i--;
	}
	return (tab);
}
