void    *ft_memcpy(void *restrict dest, void *restrict src, size_t n)
{
    int count;

    count = 0;
    while (count <= n)
    {
        dest[count] = src[count];
        count++;
    }
    dest[count] = '\0';
    return(dest)
}