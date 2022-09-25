/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 21:12:59 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/25 21:46:46 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*swp;
	unsigned int		count;

	*swp = ft_strdup (s);
	if (!new_str)
		return (NULL);
	while (new_str[count] != '\0')
		swp[count] = f (count, s[count]);
	return (swp);
}
