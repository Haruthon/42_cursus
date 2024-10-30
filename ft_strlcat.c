#include <stddef.h>

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i, dest_len, src_len;

    dest_len = 0;
    src_len = 0;

    while(dest[dest_len] != '\0' && dest_len < size)
        dest_len++;

    while(src[src_len] != '\0')
        src_len++;

    i = 0;

    while(src[i] != '\0' && dest_len + i < size - 1)
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    dest[dest_len + i] = '\0';

    return dest_len + src_len;
}
