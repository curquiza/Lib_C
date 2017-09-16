#include <stdio.h>
#include <stdlib.h>

void	*ft_memjoin(void *, void *, size_t, size_t);

int		main(int ac, char **av)
{
	if (ac != 5)
		return (0);
	printf("nouvelle chaine : %s\n", ft_memjoin(av[1], av[2], atoi(av[3]), atoi(av[4])));
	return (0);
}
