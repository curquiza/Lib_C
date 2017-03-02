#include "libft.h"

void	ft_upper(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 32;
		s++;
	}
}
