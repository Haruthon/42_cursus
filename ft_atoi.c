#include <stddef.h>

int ft_atoi(const char *nptr)
{
    int result, sign;
    size_t i;

    i = 0;
    while(nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
        i++;

    sign = 1;
    if(nptr[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if(nptr[i] == '+')
        i++;

    result = 0;
    while(nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = result * 10 + (nptr[i] - '0');
        i++;
    }

    return result * sign;
}
