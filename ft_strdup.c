#include <stdlib.h>
#include <string.h>

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while(s[i] != '\0')
        i++;
    return i;
}

void *ft_memcpy(void *dest,const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;

    while(n--)
        *d++ = *s++;

    return dest;
}

char *ft_strdup(const char *s)
{
    size_t len;
    char *copy;

    if(s == NULL)
        return NULL;

    len = ft_strlen(s);
    copy = (char *)malloc(len + 1);

    if(copy == NULL)
        return NULL;

    ft_memcpy(copy, s, len + 1);
    return copy;
}