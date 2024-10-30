#include <stddef.h>

size_t ft_strlen(const char *src)
{
    size_t i;

    i = 0;
    while(src[i] != '\0')
        i++;
    return i;
}

size_t ft_strlcpy(char *dest,const char *src, size_t size)
{
    size_t i;

    if(size == 0)
        return ft_strlen(src);

    i = 0;
    while(i < size - 1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    while(src[i] != '\0')
        i++;

    return i;
}
