#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

static void	test(char *s)
{
	ft_printf("str = %s - ret = %d\n", s, ft_is_int(s));
}

int		main(void)
{
	test("2147483647");
	test("2147483648");
	test("-2147483648");
	test("-2147483647");
	test("-2147483649");
	test("3147483647");
	test("-3147483647");
	test("1003147483647");
	test("-001");
	test("+001");
	test("+001au");
	test("0");
	test("01");
	test("+0");
	test("-0");
	return (0);
}
