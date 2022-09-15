/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 23:26:10 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/16 01:32:54 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (nmemb =! 0 && size =! 0)
	{
		mem = malloc(size * nmemb);
		mem = bzero(mem, (count * size));
		return (mem);
	}
	return (NULL);
}
