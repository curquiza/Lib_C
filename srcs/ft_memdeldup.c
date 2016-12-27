#include "libft.h"

/*
** Supprime et free str puis strdup de la source
** Retourne -1 en cas d'erreur, 0 sinon.
*/

int		ft_memdeldup(void **dst, void *src, size_t size)
{
	if (!dst || !src)
		return (-1);
	ft_memdel(dst);
	if (!(*dst = ft_memalloc(size)))
		return (-1);
	ft_memcpy(*dst, src, size);
	return (0);
}
