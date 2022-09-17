/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 04:50:25 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/17 05:57:26 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		lens1;

	lens1 = ft_strlen(s1);
	result = malloc(sizeof(char) * (lens1 + ft_strlen(s2) + 1));
	while (s2[lens1] != '\0')
	{
		lens1++;
		result[lens1] = s2[lens1];
	}
	lens1 = 0;
	while (s1[lens1] != '\0')
	{
		result[lens1] = s1[lens1];
		lens1++;
	}
	return (result);
}
