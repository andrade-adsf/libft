/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 06:03:27 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/17 07:37:12 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	count;

	count = 0;
	while (s1[count] == set)
		count++;
	s1 = s1[count];
	count = 0;
	while (s1[count] != set)
		count++;
	s1[count] = '\0';
	return (s1);
}
