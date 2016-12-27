#include "libft.h"

/*
** Supprime et free dst puis strdup de la source
** Retourne -1 en cas d'erreur, 0 sinon.
*/

int		ft_strdeldup(char **dst, char *src)
{
	if (!dst || !src)
		return (-1);
	ft_strdel(dst);
	if (!(*dst = ft_strdup(src)))
		return (-1);
	return (0);
}
