/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 23:54:05 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/15 00:06:41 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		count;
	char	*str1;
	char	*str2;

	count = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while ((str1[count] == str2[count]) && (str1[count] != '\0')
		&& (str2[count] != '\0') && (count < n))
		count++;
	return (s1[count] - s2[count]);
}
