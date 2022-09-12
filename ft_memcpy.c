/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 23:44:48 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/11 23:03:25 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *restrict dest, void *restrict src, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n && ((char *)src)[count] != '\0')
	{
		((char *)dest)[count] = ((char *)src)[count];
		count++;
	}
	((char *)dest)[count] = '\0';
	return (dest);
}
