/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 23:44:52 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/12 00:15:08 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	int	count;

	count = 0;
	while (count <= n && ((char *)s) != '\0')
	{
		((char *)s)[count] = c;
		count ++;
	}
	return ((char *)&s);
}