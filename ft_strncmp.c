int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int   count;

    count = 0;
    while (s1[count] != '\0' && s2count != '\0' && s1[count] == s2[count] && count <= n)
        count++;
    return (s1[count] - s2[count])
}
