/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:17:34 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/17 00:34:05 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	char	*str;
	int		count;

	str = malloc(sizeof(char) * ft_strlen(s));
	while (s[count] != '\0')
	{
		s[count] = str[count];
		count++;
	}
	return (str);
}