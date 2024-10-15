char *ft_strcat(char *dest, char *src)
{
    int src_l;
    int dest_l;

    dest_l = 0;
    src_l = 0;
    while (dest[dest_l] != '\0')
        dest_l++;
    while (src[src_l] != '\0')
    {
        dest[dest_l] = src[src_l];
        src_l++;
        dest_l++;
    }
    dest[dest_l] = '\0';
    return (dest);
}