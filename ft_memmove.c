#include <stddef.h>

void *ft_memmove(void *dest, void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char *)dest;
    s = (unsigned char *)src;

    if(d < s || d >= s + n)
    {
        while(n--)
            *d++ = *s++;
    }
    else
    {
        d += n;
        s += n;
        while(n--)
        *(--d) = *(--s);
    }

    return dest;
}
