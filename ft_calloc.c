#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>

void *ft_memset(void *src, int c, size_t n)
{
    unsigned char *dest = (unsigned char *)src;
    while(n--)
        *dest++ = (unsigned char)c;
    return src;
}

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    if(nmemb == 0 || size == 0 || (nmemb > SIZE_MAX / size))
        return NULL;

    ptr = malloc(nmemb * size);

    if(ptr == NULL)
        return NULL;

    ft_memset(ptr, 0, nmemb * size);
    return ptr;
}