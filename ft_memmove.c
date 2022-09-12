/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:30:01 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/12 00:00:12 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*swp_dest;
	char	*swp_src;

	swp_dest = (char *) dest;
	swp_src = (char *) src;
	if (dest && src)
	{
		while (n > 0)
		{
			n--;
			swp_dest[n] = swp_src[n];
		}
		return (dest);
	}
	else
	{
		return (NULL);
	}
}
