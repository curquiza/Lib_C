#include "libft.h"

/*
** Supprime et free str puis strdup de la source
** Retourne -1 en cas d'erreur, 0 sinon.
*/

int		ft_strdeldup(char **str, char *source)
{
	if (!str || !source)
		return (-1);
	ft_strdel(str);
	if (!(*str = ft_strdup(source)))
		return (-1);
	return (0);
}
