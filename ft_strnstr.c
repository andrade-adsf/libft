char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	count_big;
	int	count_little;
	int	pointer;

	count_big = 0;
	count_little = 0;
	if (little[0] == '\0')
		return(big);
	while (big[count_big] != '\0' && big[count_big] != little[count_little] && big[count_big] <= len)
	{
		count_big++;
		while (big[count_big] == little[count_little] && little != '\0')
		{
			pointer = (char *)&big[count_big]
			count_little++;
			count_big++;
		}
		if (big[count_big] != little[count_little])
			count_little = 0;
		else
			return(pointer);
	}
	return(NULL);
}