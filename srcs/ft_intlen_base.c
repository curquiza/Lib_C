#include "libft.h"

int		ft_intlen_base(int n, int base)
{
	int		size;

	size = 0;
	if (base < 2 || base > 16)
		return (0);
	if (n == 0)
		return (1);
	if (n < 0 && base == 10)
		size++;
	while (n != 0)
	{
		n = n / base;
		size++;
	}
	return (size);
}
