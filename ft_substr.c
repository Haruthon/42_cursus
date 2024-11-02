#include "libft.h"
#include <stdlib.h>


char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t s_len = ft_strlen(s);
    char *result;

    if(s_len <= start)
        return NULL;

    if(s_len < start + len)
        len = s_len - start;

    result = (char *)malloc((len + 1) * sizeof(char));
    if(result == NULL)
        return NULL;

    i = 0;
    while(i < len)
    {
        result[i] = s[start];
        i++;
        start++;
    }
    result[i] = '\0';

    return result;
}
