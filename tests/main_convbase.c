#include <stdio.h>
#include <stdlib.h>

char	*ft_convbase(char *value, int old_base, int new_base);

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	printf("num in base %d : %d\n", atoi(av[2]), atoi(av[1]));
	printf("~~ after ft_convbase ~~\n");
	printf("num in base %d : %s\n", atoi(av[3]), ft_convbase(av[1], atoi(av[2]), atoi(av[3])));
	return (0);
}
