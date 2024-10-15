char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int dest_cnt;
    unsigned int src_cnt;
    dest_cnt = 0;
    src_cnt = 0;
    while (dest[dest_cnt] != '\0')
        dest_cnt++;
    while (src[src_cnt] != '\0' && src_cnt < nb)
    {
        dest[dest_cnt + src_cnt] = src[src_cnt];
        src_cnt++;
        dest[dest_cnt + src_cnt] = '\0';
    }
    return (dest);
}