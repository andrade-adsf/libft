/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 23:44:52 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/25 22:12:00 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		return (NULL);
	while (count <= n)
	{
		((char *)s)[count] = c;
		count ++;
	}
	return (s);
}
