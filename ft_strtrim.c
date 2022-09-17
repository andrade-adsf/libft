/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 06:03:27 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/17 07:46:07 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		count;
	char	*swp;

	count = 0;
	swp = ft_strdup(s1);
	while (swp[count] == set)
		count++;
	swp = swp[count];
	count = 0;
	while (swp[count] != set)
		count++;
	swp[count] = '\0';
	return (swp);
}
