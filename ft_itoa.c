#include "libft.h"

static int check_size(long int n)
{
	int count;

	count = 0;
	if(n <= 0)
	{
		count++;
		n = -n;
	}
	while(n != 0)
	{
		count++;
		n /= 10;
	}
	return count;
}

char *ft_itoa(int n)
{
	int size;
	long int long_n;
	char *result;

	long_n = (long int)n;
	size = check_size(n);
	result = malloc(sizeof(char) * size + 1);
	if(!result)
		return NULL;
	result[size] = '\0';
	if(long_n < 0)
	{
		result[0] = '-';
		long_n = -long_n;
	}
	else if(n == 0)
	{
		result[0] = '0';
	}
	while(long_n != 0 && size--)
	{
		result[size] = (long_n % 10) + '0';
		long_n /= 10;
	}
	return result;
}
