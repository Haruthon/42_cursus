#include "libft.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("%d %d\n", atoi("2147483647"), ft_atoi("2147483647"));
	printf("%d %d\n", atoi("2147483648"), ft_atoi("2147483648"));
	printf("%d %d\n", atoi("2147483649"), ft_atoi("2147483649"));
	printf("%d %d\n", atoi("4294967295"), ft_atoi("4294967295"));
	printf("%d %d\n", atoi("4294967296"), ft_atoi("4294967296"));
	printf("%d %d\n", atoi("9223372036854775807"),
		ft_atoi("9223372036854775807"));
	printf("%d %d\n", atoi("9223372036854775808"),
		ft_atoi("9223372036854775808"));
}