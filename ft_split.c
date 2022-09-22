/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 00:50:46 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/22 23:47:24 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		next_malloc;
	int		count;
	int		word_count;
	char	**word;

	count = 0;
	word_count = 0;
	while (s[count] != '\0')
	{
		while (s[count] == c)
			count++;
		next_malloc = ft_strlen_sep(s, c) - 1;
		word[word_count] = malloc(sizeof(char) * next_malloc + 1);
		word_count++;
		while (s[count] != c)
			count++;
	}
	while (word_count >= 0)
		ft_ptuchar_bs(s, c, count);
	return (word);
}

int	ft_strlen_sep(char *str, char c)
{
	int	result;

	result = 0;
	while (str[result] != c && str[result] != '\0')
		result++;
	return (result);
}

int	ft_ptuchar_bs(char *str, char c, int count)
{
	while (s[count] == c)
		count--;
	ft_putchar_fd('\0', 1);
	count--;
	while (s[count] != c && s[count] >= 0)
		word[word_count] = ft_putchar_fd(s[count], 0);
		count--;
	word_count--;
}
