/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 00:41:29 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/09 02:18:39 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count] != c && s[count] != '\0')
		count++;
	if (s[count] == c)
		return ((char *)&s[count]);
	else
		return (NULL);
}
