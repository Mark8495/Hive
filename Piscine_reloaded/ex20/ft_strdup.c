#include <stdlib.h>

char *ft_strdup(char *src)
{
    char *dest;
    int src_size;
    int i;

    i = 0;
    src_size = 0;
    while (src[src_size])
        src_size++;
    dest = (char *)malloc(sizeof(*dest) * (src_size) + 1);
    if (!dest)
        return (NULL);
    while (i < src_size)
    {
        dest[i] = src[i];
        i++;
    }
    dest[src_size] = '\0';
    return (dest);
}