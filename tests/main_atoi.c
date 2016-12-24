#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str);

int		main(int ac, char **av)
{
	//char	test[5];
	//int		i;

	/*i = 0;
	test[0] = '\0';
	test[1] = '\0';
	test[2] = '4';
	test[3] = '2';
	test[4] = '\0';
	while (i < 33)
	{
		test[0] = i;
		test[1] = i;
		printf("num ascii testé : %d\n", i);
		printf("atoi : %d\n\n", atoi(test));
		i++;
	}*/
	// suite à ce test, les num ascii pris en compte par atoi sont :
	// 9, 10, 11, 12, 13 et 32
	
	if (ac != 2)
		return (0);
	printf("chaine envoyée : %s\n", av[1]);
	printf("atoi : %d\n", atoi(av[1]));
	printf("ft_atoi : %d\n", ft_atoi(av[1]));
	return (0);
}
