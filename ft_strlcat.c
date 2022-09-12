/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:38:23 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/11 20:07:55 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count_dst;
	size_t	count_src;

	count_dst = ft_strlen(dst);
	count_src = 0;
	while (src[count_src] != '\0' && count_src < (size - 1))
	{
		dst[count_dst] = src[count_src];
		count_src++;
		count_dst++;
	}
	dst[count_dst] = '\0';
	return (ft_strlen(dst));
}
