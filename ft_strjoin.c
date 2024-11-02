#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    char *result;

    if(s1 == NULL || s2 == NULL)
        return NULL;
    result = (char *)malloc(s1_len + s2_len + 1);
    if(result == NULL)
        return NULL;
    i = 0;
    j = 0;
    while(s1[i])
    {
        result[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while(s2[i])
    {
        result[j] = s2[i];
        i++;
    }
    result[j] = '\0';
    return result;
}
