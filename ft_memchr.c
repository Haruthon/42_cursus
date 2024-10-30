#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *p;
    unsigned char target;
    size_t i;

    *p = (const unsigned char *)s;
    target = (unsigned char)c;

    i = 0;
    while(i < n)
    {
        if(p[i] == target)
            return (void *)(p + i);
        i++;
    }

    return NULL;
}