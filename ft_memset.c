void    *ft_memset(void *s, int c, size_t n)
{
    int count;

    count = 0;
    while (count <= n)
    {
        s[count] = c;
        count ++;
    }
    return ((char *)&s)
}