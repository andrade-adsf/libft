/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 04:50:25 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/25 23:54:46 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		lens1;

	lens1 = ft_strlen(s1);
	result = malloc((lens1 + ft_strlen(s2) + 1) * sizeof(char));
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
