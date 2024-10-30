#include <stddef.h>

char *ft_strrchr(const char *s, int c)
{
    const char *save;

    while(*s)
    {
        if(*s == (char)c)
            save = (char *)s;
        s++;
    }

    return (char *)save ? (char *)save : NULL;
}