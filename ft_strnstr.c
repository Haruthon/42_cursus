#include <stddef.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i, j;

    if(*little == '\0')
        return (char *)big;

    i = 0;
    while(big[i] != '\0' && i < len)
    {
        j = 0;
        while(i + j < len && big[i + j] == little[j])
        {
            if(little[j + 1] == '\0')
                return (char *)(big + i);
            j++;
        }
        i++;
    }

    return NULL;
}
