#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

int		main(int ac, char **av)
{
	unsigned long long int	value = 1000000000011111111;
	if (ac != 1)
		return (0);
	(void)av;

	printf("len de %llu => %d\n", value, ft_ullintlen(value));
	return (0);
}
