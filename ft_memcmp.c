#include <stddef.h>

int memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1, *p2;
    size_t i;

    *p1 = *s1;
    *p2 = *s2;

    i = 0;
    while(i < n)
    {
        if(p1[i] != p2[i])
            return p1[i] - p2[i];
        i++;
    }

    return 0;
}