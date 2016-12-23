#include "libft.h"

/*
** Ne gère pas les négatifs pour les bases != 0
*/

static char		*ft_fill_tabbase(void)
{
	char	*tab;
	int		i;

	i = 0;
	if (!(tab = ft_strnew(15)))
		return (NULL);
	while (i < 16)
	{
		if (i < 10)
			tab[i] = '0' + i;
		else
			tab[i] = '0' + i + 7;
		i++;
	}
	return (tab);
}

char			*ft_itoa_base(int value, int base)
{
	char	*tab;
	char	*tab_base;
	int		i;

	if (base < 2 || base > 16)
		return (NULL);
	i = ft_intlen_base(value, base);
	if (!(tab = ft_strnew(i)) || !(tab_base = ft_fill_tabbase()))
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
	ft_strdel(&tab_base);
	return (tab);
}
